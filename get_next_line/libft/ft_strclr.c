/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 20:52:03 by asosnov           #+#    #+#             */
/*   Updated: 2016/10/01 20:52:05 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	counter = 0;
	while (s && str[counter])
	{
		str[counter] = '\0';
		counter++;
	}
}
