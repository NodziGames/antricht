/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 10:08:42 by antricht          #+#    #+#             */
/*   Updated: 2016/06/09 09:28:17 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	render_line(void **a, int line, float distance, int face)
{
	float		y1;
	float		y2;
	int			color;

	if (face == 1)
		color = 0x10FFFFFF;
	if (face == 2)
		color = 0x20FFFFFF;
	if (face == 3)
		color = 0x30FFFFFF;
	if (face == 4)
		color = 0x40FFFFFF;
	y1 = distance;
	y2 = WIN_H - distance;
	if (y2 > y1)
	{
		while (y2 > y1)
		{
			if ((y1 > 0) && (y1 < WIN_H))
				mlx_pixel_put(a[0], a[1], line, y1, color);
			y1 += 1;
		}
	}
}
