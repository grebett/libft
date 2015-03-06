/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:33:47 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:12:30 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	const unsigned char *s3;
	const unsigned char *s4;

	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	i = 0;
	while ((s3[i] == s4[i]) && (s3[i] != '\0') && (s4[i] != '\0'))
		i++;
	return (s3[i] - s4[i]);
}
