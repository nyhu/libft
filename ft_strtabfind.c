/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabfind.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 15:06:09 by tboos             #+#    #+#             */
/*   Updated: 2016/03/18 15:13:56 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtabfind(char **tab, char *needle)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_strstr(tab[i], needle))
			return (tab[i]);
		i++;
	}
	return (NULL);
}
