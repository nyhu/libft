/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/01/19 23:22:02 by tboos            ###   ########.fr       */
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

char		**ft_strsplit(char const *s, char c)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	while (*s == c)
		s++;
	cpy = ft_strdup(s);
	i = ft_strlen(cpy);
	while (i && cpy[i - 1] == c)
		i--;
	cpy[i] = '\0';
	j = 0;
	while (i > 0)
	{
		if (cpy[i] == c)
		{
			j++;
			while (cpy[i] == c)
				i--;
		}
		i--;
	}
	return ((j ? ft_strsplitcpy(cpy, c, j + 1, i) : NULL));
}
