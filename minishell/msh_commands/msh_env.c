/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 07:43:18 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:19:50 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int		msh_env(char **envp)
{
	char	**env;
	char	*cenv;

	env = envp;
	while (*env != 0)
	{
		cenv = *env;
		ft_print(cenv);
		ft_print("\n");
		env += 1;
	}
	return (1);
}
