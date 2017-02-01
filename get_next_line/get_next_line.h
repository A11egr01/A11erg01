/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:58:24 by asosnov           #+#    #+#             */
/*   Updated: 2016/11/15 15:58:25 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return(1) -> a line has been read
** return(0) -> the reading has been completed
** return(-1) -> an error has happened
** the function must return the result without '\n'
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

int	get_next_line(int const fd, char **line);

#endif
