/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 08:39:33 by antricht          #+#    #+#             */
/*   Updated: 2016/07/04 07:55:03 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/minishell.h"

char	**split_line(char *line)
{
	int		buffsize;
	int		pos;
	char	**tokens;
	char	*token;

	tokens = malloc(buffsize * sizeof(char*));
	if (!tokens)
	{
		ft_print("Memory Allocation Failed. Get more RAM skrub\n");
		exit(EXIT_FAILURE);
	}
	pos = 0;
	buffsize = SL_BUFF;
	token = strtok(line, SL_DELI);
	while (token != NULL)
	{
		tokens[pos] = token;
		pos += 1;
		token = strtok(NULL, SL_DELI);
	}
	tokens[pos] = NULL;
	return (tokens);
}
