/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:47:38 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:07:09 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_memset(void *data, int c, size_t size)
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
