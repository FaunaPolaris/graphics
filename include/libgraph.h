/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraph.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:42:48 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/09 11:23:03 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPH_H
#define LIBGRAPH_H

# include <mlx.h>
# include <stdlib.h>
# include <math.h>

# define WIDTH 1280
# define HEIGHT 720

typedef struct s_vector
{
	double	x;
	double	y;
}	t_vector;

typedef struct s_img_data
{
	void	*img;
	char	*addr;
	int		bits;
	int		line;
	int		endian;
}	t_img_data;

typedef struct s_mlx
{
	void	*mlx;
	void	*window;
	t_img_data	*img;
}	t_mlx;

int	fp_graphical_init(char *title, t_mlx *data);
void	fp_graphical_end(t_mlx *data);
void	fp_putpixel(t_mlx *data, int x, int y, int color);
void	fp_butterfly(t_mlx *data, t_vector center);
t_vector	fp_find_center(void);

#endif