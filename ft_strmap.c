/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:25:59 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:31:26 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int		ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char					*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int		i;
	char				*str;
	unsigned int		length;

	length = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * length + 1);
	i = 0;
	while (i < length)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
