/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_ls.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 12:17:20 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:20:14 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int		msh_ls(char **args)
{
	pid_t		pid;

	pid = fork();
	if (pid < 0)
	{
		ft_print("Error: Get a knife instead\n");
		return (1);
	}
	if (pid == 0)
	{
		ft_print("\n\n===HIT ENTER TO RESUME MINISHELL===\n\n");
		execve("/bin/ls", args, NULL);
	}
	return (1);
}
