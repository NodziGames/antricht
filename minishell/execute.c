/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 08:54:49 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:17:16 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/minishell.h"

static int		launch(char **args)
{
	pid_t	pid;
	pid_t	wpid;
	int		status;

	pid = fork();
	if (pid == 0)
	{
		ft_print("Invalid Command... Type \"help\" for a command list\n");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		ft_print("Error:\n");
	else
	{
		while (1)
		{
			wpid = waitpid(pid, &status, WUNTRACED);
			if (!(!WIFEXITED(status) && !WIFSIGNALED(status)))
				break ;
		}
	}
	return (1);
}

int				execute(char **args, char **envp)
{
	int i;

	if (args[0] == NULL)
		return (1);
	if (ft_strcmp(args[0], "exit") == 0)
		return (msh_exit(args));
	if (ft_strcmp(args[0], "help") == 0)
		return (msh_help(args));
	if (ft_strcmp(args[0], "clear") == 0)
		return (msh_clear());
	if (ft_strcmp(args[0], "coffee") == 0)
		return (msh_coffee(args));
	if (ft_strcmp(args[0], "ls") == 0)
		return (msh_ls(args));
	if (ft_strcmp(args[0], "echo") == 0)
		return (msh_echo(args));
	if (ft_strcmp(args[0], "cd") == 0)
		return (msh_cd(args));
	if (ft_strcmp(args[0], "pwd") == 0)
		return (msh_pwd(args));
	if (ft_strcmp(args[0], "env") == 0)
		return (msh_env(envp));
	if (ft_strcmp(args[0], "lol") == 0)
		return (msh_emoji(args));
	return (launch(args));
}
