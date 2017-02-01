/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 13:58:04 by asosnov           #+#    #+#             */
/*   Updated: 2016/10/10 13:58:05 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *result;
	t_list *tmp;
	t_list *prev;

	result = NULL;
	if (lst)
	{
		result = f(lst);
		prev = result;
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			prev->next = tmp;
			prev = tmp;
			lst = lst->next;
		}
		prev->next = NULL;
	}
	return (result);
}
