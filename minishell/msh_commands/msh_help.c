/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_help.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 10:44:40 by antricht          #+#    #+#             */
/*   Updated: 2016/07/01 08:20:04 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/minishell.h"

int		msh_help(char **args)
{
	ft_print("\n\nWelcome to my minishell! I can safely assume you typed help\n\
because you don't know how to use this piece of junk. Usually\n\
these help files are pretty long because of all the functions\n\
you can use. My shell is pretty short and pathetic, so to\n\
make up for my lack of functions, here's a short filler joke.\n\
==============================================================\n\
Why did Sally fall of the swing? She didn't have any arms.\n\
==============================================================\n\
Ok, now let's get down to the meat of the shell...\n\
Well, at least the bit of meat it has:\n\
\n\
Commands======================================================\n\
\n\
ALL INPUTS ARE CASE SENSITIVE\n\
\n\
exit: This exits the shell, then sends you back to a better one.\n\
Apparently it's easier to not launch this shell at all.\n\
\n\
clear: Clear's the screen without need for someone on community service\n\
\n\
ls: Lists all the files in the current directory.\n\
\n\
echo: Enjoy your own company by having the computer spout back\n\
all your gibberish.\n\
\n\
coffee: Because we all need coffee to stay awake!\n\
\n\
cd: Short for \"Change Diapers\", some people also believe it's short for\n\
\"Change Directory\".\n\
\n\
pwd: Forgot where you are? This command is here to save the day!\n\
\n\
env: Print out all the environment variables. Not very usefull\n\
\n\
help: Stating what this command does on the help page, is like\n\
calling someone to tell him that he left his phone at home.\n\n\n");
	return (1);
}
