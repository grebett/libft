/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:28:36 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:04:53 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void				*ft_memalloc(size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)malloc(size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = 0;
		i++;
	}
	return ((void *)p);
}
