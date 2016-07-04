/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 08:08:12 by antricht          #+#    #+#             */
/*   Updated: 2016/07/04 07:41:28 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/minishell.h"

char	*read_line(void)
{
	int		buffsize;
	int		pos;
	char	*buffer;
	int		c;

	buffsize = RL_BUFF;
	pos = 0;
	buffer = malloc(sizeof(char) * buffsize);
	if (!buffer)
	{
		ft_print("Memory Allocation Failed. Get more RAM skrub\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		c = ft_getchar();
		if (c == EOF || c == '\n')
		{
			buffer[pos] = '\0';
			return (buffer);
		}
		else
			buffer[pos] = c;
		pos += 1;
	}
}
