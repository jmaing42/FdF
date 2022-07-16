/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:41:15 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 13:45:45 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "ft_types.h"

typedef struct s_fdf
{
	void	*mlx_context;
	void	*mlx_window;
	void	*front;
	void	*back;
}	t_fdf;

typedef struct s_fdf_options
{
	int		window_w;
	int		window_h;
	char	*title;
}	t_fdf_options;

t_err	fdf_init_options(t_fdf_options *out);
t_err	fdf_init(t_fdf *out, t_fdf_options *option);

#endif
