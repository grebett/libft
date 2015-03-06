/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:06:32 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:22:00 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void				*ft_memcpy(void *dest, const void *src, size_t size)
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

void					*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	i = 0;
	if (src <= dest)
	{
		p1 = dest - 1;
		p2 = src - 1;
		while (size > 0)
		{
			*(p1 + size) = *(p2 + size);
			size--;
		}
	}
	else
	{
		ft_memcpy(dest, src, size);
		(void)i;
	}
	return (dest);
}
