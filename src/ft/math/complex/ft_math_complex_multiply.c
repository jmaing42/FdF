/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_complex_multiply.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:29:11 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/08/31 01:33:58 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_complex.h"

#include <math.h>

t_ft_math_complex	ft_math_complex_multiply(
	t_ft_math_complex lhs,
	t_ft_math_complex rhs
)
{
	return (
		ft_math_complex(
			lhs.real * rhs.real - lhs.imaginary * rhs.imaginary,
			lhs.real * rhs.imaginary + lhs.imaginary * rhs.real
		)
	);
}
