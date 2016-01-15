/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2015/11/05 00:11:36 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		m;
	int		i;
	char	*nbr;

	m = n;
	i = 1;
	while (m > 0)
	{
		m = m / 10;
		i++;
	}
	if (n <= 0)
		i++;
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (NULL);
	nbr[i] = '\0';
	m = n;
	while (--i >= 0)
	{
		nbr[i] = '0' + n % 10;
		n = n / 10;
	}
	if (m < 0)
		nbr[0] = '-';
	return (nbr);
}
