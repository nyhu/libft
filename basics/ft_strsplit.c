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

static char	**ft_strsplitcpy(char *cpy, char c, size_t j, size_t i)
{
	char	**split;
	char	**result;

	if (!(split = (char **)ft_memalloc(sizeof(char *) * (j + 1))))
		return (NULL);
	j = 0;
	while (cpy[i])
	{
		split[j] = &(cpy[i]);
		while (cpy[i] != c && cpy[i])
			i++;
		cpy[i] = '\0';
		j++;
		if (!(cpy[i]))
			break ;
		i++;
		while (cpy[i] == c)
			i++;
	}
	split[j] = NULL;
	result = ft_strtabdup(split);
	free(split);
	return (result);
}

char		**ft_unmalloc_strsplit(char *s, char c)
{
	char	*t;
	char	**r;
	size_t	nb;

	t = 0;
	while (*s && *s == c)
		s++;
	t = s;
	while (*t && t = ft_strchr(t, c) && ++nb)
		while (*t && *t == c)
			t++;
	if (!nb || !(r = (char *)ft_memalloc(nb + 1)))
		return (NULL);
	nb = 0;
	while (*s 
}
