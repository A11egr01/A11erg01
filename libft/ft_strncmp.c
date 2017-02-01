/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:02:09 by asosnov           #+#    #+#             */
/*   Updated: 2016/09/22 16:02:16 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *src1, const char *src2, size_t len)
{
	unsigned char src1_cpy;
	unsigned char src2_cpy;

	while (len-- > 0)
	{
		src1_cpy = (unsigned char)*src1++;
		src2_cpy = (unsigned char)*src2++;
		if (src1_cpy != src2_cpy)
			return (src1_cpy - src2_cpy);
		if (src1_cpy == '\0')
			return (0);
	}
	return (0);
}
