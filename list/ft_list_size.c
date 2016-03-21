/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:26:51 by tboos             #+#    #+#             */
/*   Updated: 2015/11/06 18:48:26 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

size_t	ft_list_size(t_list *begin_list)
{
	size_t	size;

	size = 1;
	if (begin_list == NULL)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}
