/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 19:43:37 by asosnov           #+#    #+#             */
/*   Updated: 2016/10/18 19:43:39 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long number)
{
	int	length;

	length = 1;
	if (number < 0)
	{
		length++;
		number = -number;
	}
	while (number >= 10)
	{
		number /= 10;
		length++;
	}
	return (length);
}
