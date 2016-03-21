/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <toussaint.boos@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:38:48 by tboos             #+#    #+#             */
/*   Updated: 2015/12/16 22:41:11 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		ft_sorted_list_merge(t_list **begin1, t_list *begin2, int (*cmp)())
{
	t_list	*memo;

	while (begin2)
	{
		memo = begin2->next;
		ft_sorted_list_insert(begin1, begin2, cmp);
		begin2 = memo;
	}
}
