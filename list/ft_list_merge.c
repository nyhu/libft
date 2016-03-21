/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 23:40:00 by tboos             #+#    #+#             */
/*   Updated: 2015/12/16 21:56:41 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*rabbit;

	if (begin_list1 && *begin_list1 && begin_list2)
	{
		rabbit = *begin_list1;
		while (rabbit->next)
			rabbit = rabbit->next;
		rabbit->next = begin_list2;
	}
	else if (begin_list1 && begin_list2)
		*begin_list1 = begin_list2;
}
