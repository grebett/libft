/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:49:58 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:00:07 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int						ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int		i;
	const unsigned char *s3;
	const unsigned char *s4;

	if (!size)
		return (0);
	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	i = 0;
	while ((s3[i] == s4[i])
			&& (s3[i] != '\0')
			&& (s4[i] != '\0')
			&& (i < size - 1))
	{
		i++;
	}
	return (s3[i] - s4[i]);
}
