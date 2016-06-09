/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 09:39:50 by antricht          #+#    #+#             */
/*   Updated: 2016/06/09 07:42:05 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"
#include <stdio.h>

static int		quit(int keycode, void **target)
{
	if (keycode == 53)
	{
		mlx_destroy_window(target[0], target[1]);
		exit(0);
	}
	return (0);
}

int				main(void)
{
	void	*mlx;
	void	*win;
	void	*target[2];
	int		line;
	float	distance;

	line = 0;
	distance = 20;
	target[0] = mlx_init();
	target[1] = mlx_new_window(target[0], WIN_W, WIN_H, "wolf3d");
	while (line <= WIN_W)
	{
		render_line(target, line, distance, 1);
		line += 1;
		distance += 0.2;
	}
	mlx_key_hook(target[1], quit, target);
	mlx_loop(target[0]);
}
