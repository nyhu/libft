/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <to-uss@noos.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:34:01 by tboos             #+#    #+#             */
/*   Updated: 2015/12/17 01:15:39 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_sorted_list_insert(t_list **begin_list, t_list *new, int (*cmp)())
{
	t_list	*rabbit;
	t_list	*turtle;

	if (new)
	{
		rabbit = *begin_list;
		turtle = 0;
		while (rabbit && (*cmp)(new->data, rabbit->data) > 0)
		{
			turtle = rabbit;
			rabbit = rabbit->next;
		}
		if (turtle)
			turtle->next = new;
		else
			*begin_list = new;
		new->next = rabbit;
	}
}
