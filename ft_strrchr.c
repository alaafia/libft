/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:11:29 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/25 20:03:39 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *str, int c)
{
	size_t				n;

	n = ft_strlen(str);
	while (n != 0 && str[n] != (char)c)
		n--;
	if (str[n] == (char)c)
		return ((char *)&str[n]);
	return (NULL);
}
