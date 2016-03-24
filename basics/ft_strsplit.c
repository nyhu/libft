/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/03/23 21:37:08 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	char	*t;
	char	**r;
	int		nb;
	int		i;

	if (!s || !*s || !c)
		return (NULL);
	while (*s == c)
		s++;
	t = ft_strdup(s);
	nb = 0;
	while (*s)
		if (*(s++) != c && (*s == c || !*s))
			nb++;
	if (!nb || !(r = (char **)malloc(sizeof(char *) * (nb + 1))))
		return (NULL);
	i = -1;
	while (++i < nb && (r[i] = t))
	{
		t = ft_strchr(t, c);
		while (*t == c && !(*t = 0))
			t++;
	}
	r[i] = NULL;
	return (r);
}
