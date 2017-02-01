/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 19:31:14 by asosnov           #+#    #+#             */
/*   Updated: 2016/09/23 14:41:57 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int					i;
	int					sign;
	unsigned long long	result;

	while (*src == ' ' || *src == '\f' || *src == '\t' || *src == '\n'
			|| *src == '\r' || *src == '\v')
		src++;
	sign = (*src == '-' ? -1 : 1);
	src = (*src == '-' || *src == '+') ? src + 1 : src;
	while (*src == '0')
		src++;
	i = 0;
	result = 0;
	while (src[i] && (src[i] >= '0' && src[i] <= '9'))
	{
		result = result * 10 + (src[i] - '0');
		i++;
	}
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}
