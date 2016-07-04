/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_cd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 10:52:46 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:19:03 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int			msh_cd(char **args)
{
	if (args[1] == NULL)
		chdir("/nfs/zfs-student-6/users/antricht");
	else
	{
		if (chdir(args[1]) != 0)
			ft_print("error: Specify a valid directory!\n\
Use \"ls\" to list all files in the current folder\n");
	}
	return (1);
}
