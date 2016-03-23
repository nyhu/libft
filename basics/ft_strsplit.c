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
	char	*memo;
	char	**r;
	size_t	nb;
	size_t	i;

	if (!s || !*s || !c)
		return (NULL);
	while (*s == c)
		s++;
	t = ft_strdup(s);
	memo = t;
	nb = 0;
	while (*t)
		if (t++ && *(t - 1) != c && ((*t == c && !(*t = 0)) || !*t))
			nb++;
	if (!nb || !(r = (char **)ft_memalloc(sizeof(char *) * (nb + 1))))
		return (NULL);
	i = -1;
	t = memo;
	while (++i < nb && (r[i] = ft_strdup(t)))
		t = t + ft_strlen(t) + 1;
	free(memo);
	return (r);
}
