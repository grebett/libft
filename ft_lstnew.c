/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:41:00 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:06:04 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new_list;
	void		*new_content;

	if (content == NULL)
	{
		new_content = NULL;
		content_size = 0;
	}
	else
	{
		new_content = ft_memalloc(content_size);
		new_content = ft_memcpy(new_content, content, content_size);
	}
	new_list = malloc(sizeof(t_list));
	new_list->content = new_content;
	new_list->content_size = content_size;
	new_list->next = NULL;
	return (new_list);
}
