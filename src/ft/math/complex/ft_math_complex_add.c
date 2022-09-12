/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_complex_add.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:29:11 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/08/31 01:32:42 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_complex.h"

#include <math.h>

t_ft_math_complex	ft_math_complex_add(
	t_ft_math_complex lhs,
	t_ft_math_complex rhs
)
{
	return (
		ft_math_complex(
			lhs.real + rhs.real,
			lhs.imaginary + rhs.imaginary
		)
	);
}
