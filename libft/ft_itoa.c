/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 21:17:46 by asosnov           #+#    #+#             */
/*   Updated: 2016/10/01 21:17:47 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	ncopy;

	s = NULL;
	ncopy = (long)n;
	len = ft_intlen(ncopy);
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[len] = '\0';
	len--;
	if (n < 0)
	{
		s[0] = '-';
		ncopy = -ncopy;
	}
	while (len > 0)
	{
		s[len] = (ncopy % 10) + '0';
		ncopy /= 10;
		len--;
	}
	if (n >= 0)
		s[len] = ncopy % 10 + '0';
	return (s);
}
