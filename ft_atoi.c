/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:18:33 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 12:20:56 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_rec_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_rec_power(nb, power - 1);
		return (nb);
	}
}

static int	ft_isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

static char	*ft_suppress_space(char *str)
{
	int		i;

	i = 0;
	while ((str[i] == ' ')
			|| (str[i] == '\n')
			|| (str[i] == '\v')
			|| (str[i] == '\t')
			|| (str[i] == '\r')
			|| (str[i] == '\f'))
		i++;
	str = &(str[i]);
	return (str);
}

static int	ft_strlen_num(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (i);
		i++;
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		ret;
	char	*s2;
	char	sign;

	ret = 0;
	sign = 1;
	s2 = ft_suppress_space((char *)str);
	if ((s2[0] == '+') || (s2[0] == '-'))
	{
		if (s2[0] == '-')
			sign = -1;
		s2 = s2 + 1;
	}
	i = 0;
	while (ft_isdigit(s2[i]))
	{
		ret += (s2[i] - 48) * ft_rec_power(10, ft_strlen_num(s2) - (i + 1));
		i++;
	}
	return (ret * sign);
}
