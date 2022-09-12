/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_complex_abs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:29:11 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/08/31 01:30:09 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_complex.h"

#include <math.h>

long double	ft_math_complex_abs(t_ft_math_complex c)
{
	return (sqrtl(c.real * c.real + c.imaginary * c.imaginary));
}
