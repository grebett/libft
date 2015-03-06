/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:25:39 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:00:22 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char *s1, char *s2, size_t size)
{
	unsigned int	i;

	if (!size)
		return (1);
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && i < size)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i - 1] != s2[i - 1])
		return (0);
	return (1);
}
