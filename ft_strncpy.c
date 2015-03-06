/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:55:41 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:32:45 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < size)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
