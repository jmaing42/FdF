/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:43:29 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/13 00:38:03 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#include <stdlib.h>
#include <mlx.h>

#include "ft_exit.h"
#include "ft_assert.h"

#define MLX_EVENT_ON_KEYDOWN 2
#define MLX_EVENT_ON_KEYUP 3
#define MLX_EVENT_ON_DESTROY 17

#define KEY_ESC 53
#define KEY_Q 12
#define KEY_W 13
#define KEY_E 14
#define KEY_R 15
#define KEY_A 0
#define KEY_S 1
#define KEY_D 2

static int	key_press(int keycode, void *param)
{
	(void)param;
	if (keycode == KEY_ESC)
		ft_exit(EXIT_SUCCESS);
	return (0);
}

static int	fdf_exit(int unused, void *param)
{
	(void)unused;
	(void)param;
	ft_exit(EXIT_SUCCESS);
	return (0);
}

t_err	fdf_init_options(t_fdf_options *out)
{
	out->title = "Hello world!";
	out->window_w = 640;
	out->window_h = 480;
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
	mlx_hook(out->mlx_window, MLX_EVENT_ON_KEYDOWN, 0, &key_press, NULL);
	mlx_hook(out->mlx_window, MLX_EVENT_ON_DESTROY, 0, &fdf_exit, NULL);
	return (false);
}
