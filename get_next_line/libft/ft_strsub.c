/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 21:15:21 by asosnov           #+#    #+#             */
/*   Updated: 2016/10/01 21:15:27 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str_new;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	str_new = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!str_new)
		return (NULL);
	i = start;
	j = 0;
	while (len--)
	{
		str_new[j] = s[i];
		i++;
		j++;
	}
	str_new[j] = '\0';
	return (str_new);
}
