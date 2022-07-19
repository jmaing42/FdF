/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:43:29 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 17:18:08 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#include <mlx.h>

#include "ft_assert.h"

t_err	fdf_init_options(t_fdf_options *out)
{
	out->title = "Hello world!";
	out->window_w = 1920;
	out->window_h = 1080;
	return (false);
}

t_err	fdf_init(t_fdf *out, t_fdf_options *options)
{
	out->mlx_context = mlx_init();
	if (!out->mlx_context)
		return (true);
	out->mlx_window = ft_assert_nonnull(mlx_new_window(
				out->mlx_context,
				options->window_w,
				options->window_h,
				options->title));
	out->front = ft_assert_nonnull(mlx_new_image(
				out->mlx_context,
				options->window_w,
				options->window_h));
	out->back = ft_assert_nonnull(mlx_new_image(
				out->mlx_context,
				options->window_w,
				options->window_h));
	return (false);
}
