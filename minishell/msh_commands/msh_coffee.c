/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_coffee.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 12:13:13 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:19:23 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int		msh_coffee(char **args)
{
	if (args[1] == NULL)
	{
		ft_print("Specify the amount of coffee in seconds!\n");
		return (1);
	}
	ft_print("I feel like I can stay awake for ");
	ft_print(args[1]);
	ft_print(" Seconds\n");
	sleep(ft_atoi(args[1]));
	return (1);
}
