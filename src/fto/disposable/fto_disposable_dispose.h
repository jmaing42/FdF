/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_disposable_dispose.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 00:04:53 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/01 00:06:27 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fto_disposable.h"

#include <stddef.h>

void	fto_disposable_dispose(t_fto_disposable **disposable)
{
	if (!disposable || !*disposable)
		return ;
	(*disposable)->v->dispose(*disposable);
	*disposable = NULL;
}
