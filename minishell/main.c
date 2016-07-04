/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:47:45 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:17:25 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/minishell.h"

int		main(int argc, char **argv, char **envp)
{
	msh_clear();
	ft_print("Minishell v0.1 By Antricht\n");
	msh_loop(envp);
	return (EXIT_SUCCESS);
}
