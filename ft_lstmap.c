/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 18:00:08 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:04:12 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new_list;
	t_list	*previous;

	begin = NULL;
	previous = NULL;
	while (lst != NULL)
	{
		new_list = ft_lstnew(f(lst), f(lst)->content_size);
		if (previous != NULL)
			previous->next = new_list;
		if (begin == NULL)
			begin = new_list;
		lst = lst->next;
		previous = new_list;
	}
	return (begin);
}
