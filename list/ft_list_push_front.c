/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:21:47 by tboos             #+#    #+#             */
/*   Updated: 2015/11/06 18:43:26 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		ft_list_push_front(t_list **begin_list, void *data, size_t data_size)
{
	t_list	*p;

	if (*begin_list == NULL)
		*begin_list = ft_lstnew(data, data_size);
	else
	{
		p = ft_lstnew(data, data_size);
		p->next = *begin_list;
		(*begin_list) = p;
	}
}
