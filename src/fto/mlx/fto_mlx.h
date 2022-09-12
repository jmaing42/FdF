/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_mlx.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 00:08:30 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/01 00:21:28 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTO_MLX_H
# define FTO_MLX_H

# include "fto_disposable.h"

# include "ft_types.h"

union u_fto_mlx_vtable
{
	struct s_fto_mlx_vtable	*v;
	t_fto_disposable_vtable	*s;
};

typedef struct s_fto_mlx
{
	union u_fto_mlx_vtable	v;
}	t_fto_mlx;

typedef void	(*t_fto_mlx_v_dispose)(
					t_fto_mlx *self);

typedef struct s_fto_mlx_vtable
{
	t_fto_mlx_v_dispose	dispose;
}	t_fto_mlx_vtable;

#endif
