/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:37:17 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:36:26 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ret;

	ret = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			ret = (char *)&str[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (ret);
}
