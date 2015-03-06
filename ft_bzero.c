/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:27:01 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:02:40 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void			*ft_memset(void *data, int c, size_t size)
{
	char			*d;
	size_t			i;

	d = data;
	i = 0;
	while (i < size)
	{
		*d = (char)c;
		d++;
		i++;
	}
	return (data);
}

void				*ft_bzero(void *data, size_t size)
{
	return (ft_memset(data, 0, size));
}
