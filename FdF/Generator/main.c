/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 11:30:09 by antricht          #+#    #+#             */
/*   Updated: 2016/06/09 13:19:11 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gen.h"

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	if ((argv[1] == NULL) || (argv[2] == NULL) || (atoi(argv[1]) == 0)
			|| (atoi(argv[2]) == 0))
	{
			printf("Pass 3 Parameters! X size, Y size, and the file name followed by .fdf\n");
			return (0);
	}
	if (argc != 4)
	{
		printf("Pass 3 Parameters! X size, Y size, and the file name followed by .fdf\n");
		return (0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	write_file(x, y, 0, argv[3]);
	return (0);
}
