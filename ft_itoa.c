/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:49:21 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:03:24 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_abs(int n)
{
	return (n < 0 ? n * -1 : n);
}

static int	ft_strlen_num(int n)
{
	int		i;

	i = 1;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		neg;

	if (n == -2147483648)
		return ("-2147483648");
	neg = n < 0 ? 1 : 0;
	n = ft_abs(n);
	i = ft_strlen_num(n);
	str = (char *)malloc(sizeof(char) * (i + neg + 1));
	str[i + neg] = '\0';
	while (i + neg > neg)
	{
		i--;
		str[i + neg] = (char)((n % 10) + 48);
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
