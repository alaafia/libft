/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:33:18 by alaafia           #+#    #+#             */
/*   Updated: 2019/11/05 18:33:15 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
			|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int						ft_atoi(const char *str)
{
	int						i;
	int						sign;
	long long				n;

	i = 0;
	sign = 1;
	n = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (10 * n + str[i] - '0' < n)
			return (sign == -1 ? 0 : -1);
		n = 10 * n + str[i] - '0';
		i++;
	}
	return (n * sign);
}
