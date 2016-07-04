/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 13:40:02 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:19:34 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int		msh_echo(char **args)
{
	int		i;

	i = 1;
	while (args[i] != NULL)
	{
		ft_print(args[i]);
		if (args[i + 1] != NULL)
			ft_print(" ");
		else
			ft_print("\n");
		i += 1;
	}
	return (1);
}
