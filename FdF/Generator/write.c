/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 12:05:32 by antricht          #+#    #+#             */
/*   Updated: 2016/06/09 13:12:49 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gen.h"

int		write_file(int x, int y, int i, char *name)
{
	FILE	*fptr;

	fptr = fopen(name, "w");
	srand(time(NULL));
	while (y > 0)
	{
		if (i != (x - 1))
		{
			fprintf(fptr, "%d%s", rand() % 10, "  ");
			i += 1;
		}
		else
		{
			fprintf(fptr, "%d", rand() % 10);
			if (y > 0)
			{
				fprintf(fptr, "%c", '\n');
				y -= 1;
			}
			i = 0;
		}
	}
	fclose(fptr);
	return (0);
}
