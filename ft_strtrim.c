/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:15:26 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:19:17 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static unsigned int		ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static unsigned int		compute_pos(const char *str, unsigned int pos, char way)
{
	while ((str[pos] == ' ') || (str[pos] == '\n') || (str[pos] == '\t'))
		pos += way;
	return (pos);
}

char					*ft_strtrim(const char *str)
{
	unsigned int		i;
	unsigned int		start;
	unsigned int		end;
	char				*ret;

	if (str == NULL)
		return (NULL);
	start = compute_pos(str, 0, 1);
	if (start == ft_strlen((char *)str))
		return ("");
	end = compute_pos(str, ft_strlen((char *)str) - 1, -1);
	ret = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (ret == NULL)
		return (ret);
	i = 0;
	while (i + start <= end)
	{
		ret[i] = str[i + start];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
