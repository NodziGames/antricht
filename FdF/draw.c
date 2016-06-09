/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 08:36:04 by antricht          #+#    #+#             */
/*   Updated: 2016/06/04 12:39:07 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		draw_line(int color, float *a, float *b, void **c)
{
	t_draw_line p2;

	p2.slope = ((b[1] - a[1]) / (b[0] - a[0]));
	p2.x = a[0];
	p2.y = a[1];
	while (p2.x < b[0])
	{
		mlx_pixel_put(c[0], c[1], p2.x, p2.y, color);
		p2.x += 1;
		p2.y += p2.slope;
	}
	p2.x = a[0];
	p2.y = a[1];
	p2.slope = ((b[0] - a[0]) / (b[1] - a[1]));
	while (p2.y < b[1])
	{
		mlx_pixel_put(c[0], c[1], p2.x, p2.y, color);
		p2.y += 1;
		p2.x += p2.slope;
	}
	return (0);
}

static int		draw_line_v(float *a, float x2, float y2, void **c)
{
	t_draw_line p2;

	p2.slope = ((y2 - a[1]) / (x2 - a[0]));
	p2.x = a[0];
	p2.y = a[1];
	while (p2.x < x2)
	{
		mlx_pixel_put(c[0], c[1], p2.x, p2.y, 0x00FFFFFF);
		p2.x += 1;
		p2.y += p2.slope;
	}
	p2.x = a[0];
	p2.y = a[1];
	p2.slope = ((x2 - a[0]) / (y2 - a[1]));
	while (p2.y < y2)
	{
		mlx_pixel_put(c[0], c[1], p2.x, p2.y, 0x00FFFFFF);
		p2.y += 1;
		p2.x += p2.slope;
	}
	return (0);
}

static void		draw_square(t_draw_grid p1, int s, void *a)
{
	t_draw_square c;

	c.z = p1.height;
	c.x = p1.drawx;
	c.y = p1.drawy;
	c.y -= c.z;
	c.c1[0] = c.x;
	c.c1[1] = c.y;
	c.c2[0] = c.x + s;
	c.c2[1] = c.y - (s / 2);
	c.c3[0] = c.x + (s * 2);
	c.c3[1] = c.y;
	c.c4[0] = (c.x + s);
	c.c4[1] = c.y + (s / 2);
	draw_line(p1.color, c.c1, c.c2, a);
	draw_line_v(c.c1, c.x, c.y + c.z, a);
	draw_line(p1.color, c.c2, c.c3, a);
	draw_line_v(c.c2, c.x + s, c.y - (s / 2) + c.z, a);
	draw_line(p1.color, c.c4, c.c3, a);
	draw_line_v(c.c3, c.x + (s * 2), c.y + c.z, a);
	draw_line(p1.color, c.c1, c.c4, a);
	draw_line_v(c.c4, c.x + s, c.y + (s / 2) + c.z, a);
}

static int		get(int fd)
{
	static char	*str = NULL;
	static int	i = 0;
	char		result[3];

	if (str == NULL)
	{
		str = (char *)malloc(sizeof(char) * BUFF_SIZE);
		read(fd, (void *)str, BUFF_SIZE);
	}
	while (str[i++] != '\0')
	{
		if (((str[i - 1] >= 48 && str[i - 1] <= 57) &&
			((str[i] == ' ') || (str[i] == '\n'))))
			return (atoi(&str[i - 1]) * 5);
		if ((str[i - 1] >= 48 && str[i - 1] <= 57) && (str[i] >= 48 &&
			str[i] <= 57) && ((str[i + 1] == ' ') || (str[i + 1] == '\n')))
		{
			result[0] = str[i - 1];
			result[1] = str[i];
			i += 2;
			return (ft_atoi(result) * 5);
		}
	}
	free(str);
	return (0);
}

void			draw_grid(t_main *p)
{
	t_draw_grid p1;

	p1.startx = 50;
	p1.starty = 500;
	p1.tempx = p->x;
	while (p->y > 0)
	{
		p1.drawy = p1.starty;
		p1.drawx = p1.startx;
		p1.tempx = p->x;
		while (p1.tempx > 0)
		{
			p1.color = 0x80FFFFFF;
			p1.height = get(p->fd);
			if (p1.height != 0)
				p1.color = 0x00FFFFFF;
			draw_square(p1, p->size, p->a);
			p1.tempx -= 1;
			p1.drawx += p->size;
			p1.drawy -= (p->size / 2);
		}
		p1.starty += (p->size / 2);
		p1.startx += p->size;
		p->y -= 1;
	}
}
