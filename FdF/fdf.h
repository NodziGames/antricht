/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 08:28:53 by antricht          #+#    #+#             */
/*   Updated: 2016/06/04 13:54:18 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 10485760

typedef struct	s_main
{
	int		fd;
	void	*mlx;
	void	*win;
	void	*a[2];
	int		lines;
	int		x;
	int		y;
	int		size;
}				t_main;

typedef struct	s_draw_grid
{
	int		tempx;
	int		startx;
	int		starty;
	int		drawx;
	int		drawy;
	int		height;
	int		color;
}				t_draw_grid;

typedef struct	s_draw_line
{
	float	slope;
	float	x;
	float	y;
}				t_draw_line;

typedef struct	s_calculate_grid
{
	int		i;
	char	*s;
	int		x1;
	int		y2;
}				t_calculate_grid;

typedef struct	s_draw_square
{
	int		y;
	int		x;
	int		z;
	float	c1[2];
	float	c2[2];
	float	c3[2];
	float	c4[2];
	float	v1[2];
	float	v2[2];
	float	v3[2];
	float	v4[2];
}				t_draw_square;

void			*calculate_grid(t_main *p);
int				key_event(int keycode, void **a);
void			*swap_int(float *x1, float *x2, float *y1, float *y2);
void			draw_grid(t_main *p);
int				check_size(int x, int y);
int				ft_atoi(const char *str);

#endif
