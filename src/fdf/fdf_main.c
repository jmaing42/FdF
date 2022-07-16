/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:19:57 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 12:41:01 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <mlx.h>

#include "f_hello_world.h"

typedef struct s_fdf
{
	void	*mlx_context;
	void	*mlx_window;
}	t_fdf;

int	main(void)
{
	t_fdf	fdf;

	fdf.mlx_context = mlx_init();
	if (!fdf.mlx_context)
		return (EXIT_FAILURE);
	mlx_new_window(fdf.mlx_context, 1920, 1080, "hello world!");
	mlx_loop(fdf.mlx_context);
	return (EXIT_SUCCESS);
}
