/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_pwd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 13:58:31 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:20:22 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int			msh_pwd(char **args)
{
	char cwd[PD_BUFF];

	if (getcwd(cwd, sizeof(cwd)) != NULL)
		ft_print(cwd);
	else
		ft_print("error: Can't Display PWD");
	ft_print("\n");
	return (1);
}
