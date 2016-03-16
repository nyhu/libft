/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/03/16 14:29:03 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nbrchar(char *nbr, ssize_t n, int i)
{
	while (n)
	{
		nbr[i] = '0' - (n % 10);
		n = n / 10;
		i--;
	}
	return (nbr);
}

char		*ft_st_itoa(ssize_t n)
{
	int			m;
	int			i;
	static char	nbr[30];

	i = -1;
	m = n;
	while (m)
	{
		m = m / 10;
		i++;
	}
	if (n <= 0)
		i++;
	bzero(nbr, 12);
	if (n < 0)
		nbr[0] = '-';
	if (n > 0)
		n = -n;
	if (!n)
		nbr[0] = '0';
	return (ft_nbrchar(nbr, n, i));
}

char		*ft_itoa(ssize_t n)
{
	int			m;
	int			i;
	char		*nbr;

	i = -1;
	m = n;
	while (m)
	{
		m = m / 10;
		i++;
	}
	if (n <= 0)
		i++;
	nbr = ft_strnew(i + 1);
	if (n < 0)
		nbr[0] = '-';
	if (n > 0)
		n = -n;
	if (!n)
		nbr[0] = '0';
	return (ft_nbrchar(nbr, n, i));
}
