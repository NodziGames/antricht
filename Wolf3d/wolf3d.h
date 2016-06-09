/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 09:40:11 by antricht          #+#    #+#             */
/*   Updated: 2016/06/09 07:41:40 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# define WIN_W 640
# define WIN_H 480

# include "mlx.h"
# include <stdlib.h>

void	render_line(void **a, int line, float distance, int face);

#endif
