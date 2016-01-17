/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/01/17 17:46:57 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char *)src) == (unsigned char)c
				|| *((unsigned char *)dest) == (unsigned char)c)
			return (dest + 1);
		*((unsigned char *)dest) = *((unsigned char *)src);
		n--;
		src++;
		dest++;
	}
	return (NULL);
}
