/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:57:16 by grebett           #+#    #+#             */
/*   Updated: 2015/03/06 13:54:29 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memccpy(void *d, const void *s, int c, size_t si)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = d;
	p2 = s;
	while (i < si)
	{
		p1[i] = p2[i];
		if ((unsigned char)p2[i] == (unsigned char)c)
			return (&(p1[i + 1]));
		i++;
	}
	return (NULL);
}
