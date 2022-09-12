/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_disposable_group.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 00:08:30 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/01 00:17:43 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTO_DISPOSABLE_GROUP_H
# define FTO_DISPOSABLE_GROUP_H

# include "fto_disposable.h"

# include "ft_types.h"

union u_fto_disposable_group_vtable
{
	struct s_fto_disposable_group_vtable	*v;
	t_fto_disposable_vtable					*s;
};

typedef struct s_fto_disposable_group
{
	union u_fto_disposable_group_vtable	v;
}	t_fto_disposable_group;

typedef void	(*t_fto_disposable_group_v_dispose)(
					t_fto_disposable_group *self);
typedef t_err	(*t_fto_disposable_group_v_add)(
					t_fto_disposable_group *self,
					t_fto_disposable *disposable);

typedef struct s_fto_disposable_group_vtable
{
	t_fto_disposable_group_v_dispose	dispose;
	t_fto_disposable_group_v_add		add;
}	t_fto_disposable_group_vtable;

#endif
