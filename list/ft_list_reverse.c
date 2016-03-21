/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 21:44:02 by tboos             #+#    #+#             */
/*   Updated: 2015/11/06 21:38:21 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*stick;
	t_list	*reverse;
	t_list	*turtle;

	if (begin_list && *begin_list && (*begin_list)->next)
	{
		stick = (*begin_list)->next;
		reverse = *begin_list;
		(reverse)->next = NULL;
		while (stick->next)
		{
			turtle = reverse;
			reverse = stick;
			stick = stick->next;
			(reverse)->next = turtle;
		}
		(stick)->next = reverse;
		*begin_list = stick;
	}
}
