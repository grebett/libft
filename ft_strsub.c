/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:17:15 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:01:59 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	end;
	unsigned int	i;

	if ((int)len < 0)
		return (NULL);
	i = 0;
	end = start + len;
	str = (char *)malloc(sizeof(char) * len + 1);
	while (start < end)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[start] = '\0';
	return (str);
}
