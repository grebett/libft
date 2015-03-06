/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:47:19 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:27:49 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t			ft_strlen(char *str)
{
	size_t				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char					*ft_strdup(const char *src)
{
	size_t				size;
	char				*copy;

	size = ft_strlen((char *)src) + 1;
	copy = (char *)malloc(sizeof(char) * size);
	if (copy != NULL)
		ft_memcpy(copy, src, size);
	return (copy);
}
