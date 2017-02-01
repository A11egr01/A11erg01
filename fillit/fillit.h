/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asosnov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:26:45 by asosnov           #+#    #+#             */
/*   Updated: 2016/11/10 16:26:46 by asosnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MALLOC_GUARD(x) if(!x) return (0);
# define ABS(x) ((x) < 0) ? -(x) : x
# include "./lib/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

extern int		g_size;
extern char		**g_board;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_tetra
{
	char		c;
	t_point		p[4];
}				t_tetra;

void			error(char *message);
void			free_tetras(t_tetra **ary, int n);
void			free_board(void);
void			print_board(void);
void			valid_tetra(t_tetra *t, int n);
void			get_smallest_square(int n);
int				start_board(void);
void			clear_letter(char c);
int				place_piece(t_tetra *t, int i, int j);
int				spiral(t_tetra **ary, int n);
int				solve_puzzle(t_tetra **ptr, int n);
t_tetra			*new_tetra(void);
t_tetra			*set_coordinate(t_tetra *t, int x, int y);
t_tetra			*adjust_coordinates(t_tetra *t);
t_tetra			*read_tet(char *buffer, int ltr);

#endif
