/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:19:57 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 17:18:35 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <mlx.h>

#include "f_hello_world.h"

#include "fdf.h"

int	main(void)
{
	t_fdf			fdf;
	t_fdf_options	options;

	if (fdf_init_options(&options) || fdf_init(&fdf, &options))
		return (EXIT_FAILURE);
	mlx_loop(fdf.mlx_context);
	return (EXIT_SUCCESS);
}
