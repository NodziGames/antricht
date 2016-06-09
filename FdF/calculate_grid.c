/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 10:17:48 by antricht          #+#    #+#             */
/*   Updated: 2016/06/04 13:54:38 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	*calculate_grid(t_main *p)
{
	int					i;
	t_calculate_grid	*p3;

	p3 = (t_calculate_grid*)malloc(sizeof(t_calculate_grid));
	p3->x1 = 0;
	p3->y2 = 0;
	p3->s = (char *)malloc(BUFF_SIZE);
	read(p->fd, (void *)p3->s, BUFF_SIZE);
	i = 0;
	while (p3->s[i] != '\0')
	{
		if ((p3->s[i] == ' ') && (p3->s[i + 1] == ' ') && (p3->y2 == 0))
			p3->x1++;
		if ((p3->s[i] == ' ') && (p3->s[i + 1] >= 48 && p3->s[i + 1] <= 57)
				&& (p3->s[i + 2] >= 48 && p3->s[i + 2] <= 57) && (p3->y2 == 0))
			p3->x1++;
		if (p3->s[i] == '\n')
			p3->y2++;
		i++;
	}
	free(p3->s);
	p3->x1++;
	p->x = p3->x1;
	p->y = p3->y2;
	return (0);
}
