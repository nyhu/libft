/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 08:38:51 by tboos             #+#    #+#             */
/*   Updated: 2016/03/06 08:39:58 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcstr(char *str, char c, int size, char pos)
{
	char	tab[512];
	int		i;

	if (size < 512)
	{
		i = -1;
		if (pos == 'L')
			while (*str && ++i < size)
				tab[i] = *(str++);
		while (++i < size)
			tab[i] = c;
		tab[size] = '\0';
		if (pos == 'R')
		{
			i = size - strlen(str);
			while (*str)
			{
				tab[i] = *str;
				i++;
				str++;
			}
		}
		ft_putstr(tab);
	}
}
