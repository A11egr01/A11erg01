/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:20:59 by asosnov           #+#    #+#             */
/*   Updated: 2016/11/10 16:21:00 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(char *message)
{
	ft_putstr(message);
	exit(1);
}

void	free_tetras(t_tetra **ary, int n)
{
	while (n--)
	{
		free(ary[n]);
		ary[n] = NULL;
	}
}

void	free_board(void)
{
	int		j;

	j = 0;
	while (j < g_size)
	{
		free(g_board[j]);
		g_board[j] = NULL;
		j++;
	}
	free(g_board);
	g_board = NULL;
}

void	print_board(void)
{
	int		i;
	int		j;

	j = 0;
	while (j < g_size)
	{
		i = 0;
		while (i < g_size)
		{
			ft_putchar(g_board[i][j]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
