/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2015/11/05 00:11:36 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cpy;
	t_list	*rabbit;

	cpy = NULL;
	if (lst)
	{
		cpy = f(lst);
		cpy = ft_lstnew(cpy->content, cpy->content_size);
		if (!cpy)
			return (NULL);
		lst = lst->next;
	}
	rabbit = cpy;
	while (lst)
	{
		rabbit = rabbit->next;
		rabbit = f(lst);
		rabbit = ft_lstnew(rabbit->content, rabbit->content_size);
		if (!rabbit) 
			return (NULL);
		lst = lst->next;
		rabbit->next = NULL;
	}
	return (cpy);
}
