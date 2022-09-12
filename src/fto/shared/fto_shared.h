/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_shared.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:58:24 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/01 00:14:54 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTO_SHARED_H
# define FTO_SHARED_H

# include "fto_disposable.h"

# include <stddef.h>

union u_fto_shared_vtable
{
	struct s_fto_shared_vtable	*v;
	t_fto_disposable_vtable		*s;
};

typedef struct s_fto_shared_target
{
	void	*value;
	size_t	reference_count;
}	t_fto_shared_target;

typedef struct s_fto_shared
{
	union u_fto_shared_vtable	v;
	t_fto_shared_target			*target;
}	t_fto_shared;

typedef void			(*t_fto_shared_v_dispose)(t_fto_shared *self);
typedef void			*(*t_fto_shared_v_get)(t_fto_shared *self);
typedef void			*(*t_fto_shared_v_set)(t_fto_shared *self, void *value);
typedef t_fto_shared	*(*t_fto_shared_v_clone)(t_fto_shared *self);

typedef struct s_fto_shared_vtable
{
	t_fto_shared_v_dispose	dispose;
	t_fto_shared_v_get		get;
	t_fto_shared_v_set		set;
	t_fto_shared_v_clone	clone;
}	t_fto_shared_vtable;

#endif
