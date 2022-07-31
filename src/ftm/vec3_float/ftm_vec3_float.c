/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftm_vec3_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:49:23 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/31 15:49:23 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftm.h"

t_ftm_vec3_float	ftm_vec3_float(
	float x,
	float y,
	float z
)
{
	return ((t_ftm_vec3_float){x, y, z});
}
