/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fto_disposable_dispose.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:41:11 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/03 12:41:57 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fto_disposable.h"

#include <stddef.h>

void	fto_disposable_dispose(t_fto_disposable **disposable)
{
	(*disposable)->v->dispose(*disposable);
	*disposable = NULL;
}
