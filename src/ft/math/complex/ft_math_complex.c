/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_complex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:25:10 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/08/31 01:26:38 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_complex.h"

t_ft_math_complex	ft_math_complex(long double real, long double imaginary)
{
	const t_ft_math_complex	result = {real, imaginary};

	return (result);
}
