/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 12:13:45 by antricht          #+#    #+#             */
/*   Updated: 2016/06/04 13:54:24 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	t_main *p;

	p = (t_main*)malloc(sizeof(t_main));
	p->x = 0;
	p->y = 0;
	p->fd = open(argv[1], O_RDONLY);
	calculate_grid(p);
	p->size = check_size(p->x, p->y);
	p->mlx = mlx_init();
	p->win = mlx_new_window(p->mlx, 1000, 1000, "FdF");
	p->a[0] = p->mlx;
	p->a[1] = p->win;
	draw_grid(p);
	mlx_key_hook(p->win, key_event, p->a);
	mlx_loop(p->mlx);
	close(p->fd);
	free(p);
	return (0);
}
