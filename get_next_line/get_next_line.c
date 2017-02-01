/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:58:41 by asosnov           #+#    #+#             */
/*   Updated: 2016/11/15 15:58:43 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Adds len number of elements from string s2 to s1 .
*/

static char		*ft_strnjoin(char *str1, char *str2, size_t length)
{
	char	*str3;

	str3 = NULL;
	if (str1 && str2)
	{
		str3 = ft_strnew(ft_strlen(str1) + length);
		if (str3)
		{
			ft_strcpy(str3, str1);
			ft_strncat(str3, str2, length);
		}
	}
	return (str3);
}

/*
** Doublicate n elemets from a string and returns a pointer to that string .
*/

static char		*ft_strndup(const char *s, size_t n)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

/*
** Function creates a node everytime there is something to read .
*/

static t_list	*ft_findfd(t_list **begin, int fd)
{
	t_list	*tmp;

	tmp = *begin;
	if (tmp)
	{
		while (tmp)
		{
			if (fd == (int)tmp->content_size)
				return (tmp);
			tmp = tmp->next;
		}
	}
	tmp = ft_lstnew("\0", 1);
	tmp->content_size = fd;
	ft_lstadd(begin, tmp);
	return (tmp);
}

/*
** Function frees previous value of *tmp and fills it with
** a new one after ft_strnjoin .
*/

static char		*ft_freejoin(char *tmp, char *buf, int ret)
{
	char	*copy;

	copy = tmp;
	tmp = ft_strnjoin(tmp, buf, ret);
	free(copy);
	return (tmp);
}

/*
** Check if read isn't failing
** Looking for \n in our first while and joining all of that steps (BUFF_SIZE)
** Locate \n and move step, use cuurentlist to hold what's in there and use
** ft_strdup for memory and then we free currentlist from our memory
*/

int				get_next_line(int const fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				step;
	static t_list	*list = NULL;
	t_list			*begin;
	char			*currentlist;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	begin = list;
	list = ft_findfd(&begin, fd);
	while (!ft_strchr(list->content, '\n') && (step = read(fd, buf, BUFF_SIZE)))
		list->content = ft_freejoin(list->content, buf, step);
	step = 0;
	while (((char*)list->content)[step] && ((char*)list->content)[step] != '\n')
		++step;
	*line = ft_strndup(list->content, step);
	if (((char*)list->content)[step] == '\n')
		++step;
	currentlist = list->content;
	list->content = ft_strdup(list->content + step);
	free(currentlist);
	list = begin;
	return (step ? 1 : 0);
}
