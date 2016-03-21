/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:46:25 by tboos             #+#    #+#             */
/*   Updated: 2015/12/16 21:55:58 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	ft_delete_if(t_list **rabbit, void *data_ref, int (*cmp)())
{
	t_list	*turtle;

	while (*rabbit)
	{
		if ((*cmp)((*rabbit)->data, data_ref) == 0)
		{
			*rabbit = (*rabbit)->next;
			free(turtle->next);
			turtle->next = *rabbit;
		}
		else
		{
			turtle = *rabbit;
			*rabbit = (*rabbit)->next;
		}
	}
}

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*rabbit;

	if (begin_list && *begin_list)
	{
		while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
		{
			rabbit = *begin_list;
			(*begin_list) = (*begin_list)->next;
			free(rabbit);
		}
		rabbit = *begin_list;
		ft_delete_if(&rabbit, data_ref, cmp);
	}
}
