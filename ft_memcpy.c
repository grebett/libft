/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:46:43 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:06:00 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = dest;
	p2 = src;
	i = 0;
	while (i < size)
	{
		*(p1 + i) = *(p2 + i);
		i++;
	}
	return (dest);
}
