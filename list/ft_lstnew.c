/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:51 by tboos             #+#    #+#             */
/*   Updated: 2016/02/22 20:35:57 by tboos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_dclist	*ft_dclstnew(void const *data, size_t data_size)
{
	t_dclist	*new;

	if (!(new = (t_dclist *)malloc(sizeof(t_dclist))))
		return (NULL);
	ft_bzero(new, sizeof(t_dclist));
	if (!data)
	{
		new->data_size = 0;
		new->data = NULL;
	}
	else
	{
		new->data_size = data_size;
		new->data = ft_memmove(ft_memalloc(data_size),
				data, data_size);
	}
	return (new);
}

t_list	*ft_lstnew(void const *data, size_t data_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!data)
	{
		new->data_size = 0;
		new->data = NULL;
	}
	else
	{
		new->data_size = data_size;
		new->data = ft_memmove(ft_memalloc(data_size),
				data, data_size);
	}
	new->next = NULL;
	return (new);
}
