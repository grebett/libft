/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:37:39 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:28:30 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t		ft_strlen(char *str)
{
	size_t			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t				ft_strlcat(char *s1, const char *s2, size_t size)
{
	unsigned int	i;
	size_t			j;
	size_t			ret;
	size_t			s1_length;

	s1_length = ft_strlen(s1);
	ret = s1_length + ft_strlen((char *)s2);
	if (size <= s1_length)
		ret = ret - (s1_length - size);
	else
	{
		size = size - (s1_length + 1);
		i = 0;
		while (s1[i] != '\0')
			i++;
		j = 0;
		while ((s2[j] != '\0') && (j < size))
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
	}
	return (ret);
}
