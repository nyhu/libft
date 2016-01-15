/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2015/11/05 00:11:36 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const*s2)
{
	char	*cpy;

	cpy = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	if (!cpy)
		return (NULL);
	cpy = ft_strcpy(cpy, s1);
	cpy = ft_strcat(cpy, s2);
	return (cpy);
}
