/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/02/22 20:31:22 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "dclist.h"

void	ft_dclstdel(t_dclist **alst, void (*del)(void *, size_t))
{
	t_dclist	*tmp;
	t_dclist	*stop;

	if (alst)
		stop = *alst;
	tmp = NULL;
	while (alst && *alst && tmp != stop)
	{
		tmp = (*alst)->next;
		ft_dclstdelone(alst, del);
		*alst = tmp;
	}
	*alst = NULL;
}

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	while (alst && *alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
	*alst = NULL;
}
