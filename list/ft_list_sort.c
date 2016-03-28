/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <to-uss@noos.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:35:30 by tboos             #+#    #+#             */
/*   Updated: 2016/03/28 16:31:46 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	ft_loopsort(t_list *beg, t_list *rab, t_list *last, int (*cmp)())
{
	t_list	*memo;

	memo = last->next;
	rab = memo->next;
	if (rab != beg)
	{
		while (rab != beg)
		{
			if (cmp(memo->data, rab->data) > 0)
				memo = rab;
			rab = rab->next;
		}
		while (rab->next != memo)
			rab = rab->next;
		rab->next = memo->next;
		memo->next = last->next;
		last->next = memo;
	}
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*rabbit;
	t_list	*last;

	if (begin_list && *begin_list && (*begin_list)->next)
	{
		last = *begin_list;
		while (last->next)
			last = last->next;
		last->next = *begin_list;
		rabbit = (*begin_list)->next;
		while (last->next != rabbit)
		{
			if (cmp((*begin_list)->data, rabbit->data) > 0)
				*begin_list = rabbit;
			rabbit = rabbit->next;
		}
		last = *begin_list;
		while (last->next != *begin_list)
		{
			ft_loopsort(*begin_list, rabbit, last, cmp);
			last = last->next;
		}
		last->next = NULL;
	}
}
