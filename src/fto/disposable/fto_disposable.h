/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_disposable.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:52:04 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/03 00:22:40 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTO_DISPOSABLE_H
# define FTO_DISPOSABLE_H

typedef struct s_fto_disposable
{
	const struct s_fto_disposable_vtable	*v;
}	t_fto_disposable;

typedef void	(*t_fto_disposable_v_dispose)(t_fto_disposable *disposable);

typedef struct s_fto_disposable_vtable
{
	t_fto_disposable_v_dispose	dispose;
}	t_fto_disposable_vtable;

void	fto_disposable_dispose(t_fto_disposable **disposable);

#endif
