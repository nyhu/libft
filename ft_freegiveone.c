/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freegiveone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 08:41:53 by tboos             #+#    #+#             */
/*   Updated: 2016/03/06 08:42:02 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_freegiveone(void *kill)
{
	free(kill);
	return (1);
}

int		ft_freegivezero(void *kill)
{
	free(kill);
	return (0);
}
