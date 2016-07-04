/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:43:07 by antricht          #+#    #+#             */
/*   Updated: 2016/07/04 07:55:05 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define RL_BUFF 4096
# define SL_BUFF 4096
# define PD_BUFF 4096
# define SL_DELI " \t\r\n\a"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/wait.h>

int				ft_print(char *str);
void			msh_loop(char **envp);
char			*read_line(void);
char			**split_line(char *line);
int				execute(char **args, char **envp);

int				msh_cd(char **args);
int				msh_exit(char **args);
int				msh_help(char **args);
int				msh_clear(void);
int				msh_coffee(char **args);
int				msh_ls(char **args);
int				msh_echo(char **args);
int				msh_pwd(char **args);
int				msh_env(char **envp);
int				msh_emoji(char **args);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_getchar(void);
int				ft_atoi(const char *str);

#endif
