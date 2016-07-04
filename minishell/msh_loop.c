/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 08:03:04 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:17:43 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/minishell.h"

void	msh_loop(char **envp)
{
	char	*line;
	char	**args;
	int		status;

	while (1)
	{
		ft_print("msh> ");
		line = read_line();
		args = split_line(line);
		status = execute(args, envp);
		free(line);
		free(args);
		if (!status)
			break ;
	}
}
