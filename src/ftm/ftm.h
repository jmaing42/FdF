/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:49:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/31 15:49:14 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTM_H
# define FTM_H

typedef struct s_ftm_vec3_float
{
	float	x;
	float	y;
	float	z;
}	t_ftm_vec3_float;

typedef struct s_ftm_vec4_float
{
	float	x;
	float	y;
	float	z;
	float	w;
}	t_ftm_vec4_float;

t_ftm_vec3_float	ftm_vec3_float(
						float x,
						float y,
						float z);
t_ftm_vec3_float	ftm_vec3_float_add(
						t_ftm_vec3_float a,
						t_ftm_vec3_float b);
t_ftm_vec3_float	ftm_vec3_float_subtract(
						t_ftm_vec3_float a,
						t_ftm_vec3_float b);
t_ftm_vec3_float	ftm_vec3_float_multiply(
						t_ftm_vec3_float a,
						float b);
t_ftm_vec3_float	ftm_vec3_float_dot(
						t_ftm_vec3_float a,
						t_ftm_vec3_float b);
t_ftm_vec3_float	ftm_vec3_float_cross(
						t_ftm_vec3_float a,
						t_ftm_vec3_float b);

t_ftm_vec4_float	ftm_vec4_float(
						float x,
						float y,
						float z,
						float w);
t_ftm_vec4_float	ftm_vec4_float_add(
						t_ftm_vec4_float a,
						t_ftm_vec4_float b);
t_ftm_vec4_float	ftm_vec4_float_subtract(
						t_ftm_vec4_float a,
						t_ftm_vec4_float b);
t_ftm_vec4_float	ftm_vec4_float_multiply(
						t_ftm_vec4_float a,
						float b);
t_ftm_vec4_float	ftm_vec4_float_dot(
						t_ftm_vec4_float a,
						t_ftm_vec4_float b);
t_ftm_vec4_float	ftm_vec4_float_cross(
						t_ftm_vec4_float a,
						t_ftm_vec4_float b);

#endif
