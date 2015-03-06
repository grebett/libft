/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:16:12 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 13:37:23 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	end;
	unsigned int	i;

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

static int			ft_countsplit(char *str, char c)
{
	int				i;
	int				count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		else
		{
			while ((str[i] != c) && (str[i] != '\0'))
				i++;
			count++;
		}
	}
	return (count);
}

static char			**ft_filltab(char *str, char c, char **tab)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		else
		{
			start = i;
			while ((str[i] != c) && (str[i] != '\0'))
				i++;
			tab[j] = ft_strsub(str, start, i - start);
			j++;
		}
		tab[j] = NULL;
	}
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	int				count;
	char			**tab;

	count = ft_countsplit((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (tab != NULL)
		tab = ft_filltab((char *)s, c, tab);
	return (tab);
}
