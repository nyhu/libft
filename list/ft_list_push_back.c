/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:02:25 by tboos             #+#    #+#             */
/*   Updated: 2015/11/06 18:13:23 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "dclist.h"

void	ft_dclist_push_back(t_dclist **begin_list, void *data, size_t data_size)
{
	t_dclist	*p;

	if (*begin_list == NULL)
	{
		*begin_list = ft_dclstnew(data, data_size);
		(*begin_list)->next = *begin_list;
		(*begin_list)->prev = *begin_list;
	}
	else
	{
		p = ft_dclist_last(*begin_list);
		p->next = ft_dclstnew(data, data_size);
		p->next->prev = p;
		p->next->next = *begin_list;
		(*begin_list)->prev = p->next;
	}
}

void	ft_list_push_back(t_list **begin_list, void *data, size_t data_size)
{
	t_list	*p;

	if (*begin_list == NULL)
		*begin_list = ft_lstnew(data, data_size);
	else
	{
		p = (*begin_list);
		while (p->next != NULL)
			p = p->next;
		p->next = ft_lstnew(data, data_size);
	}
}
