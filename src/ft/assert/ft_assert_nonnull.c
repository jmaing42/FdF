/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assert_nonnull.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:14:42 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/16 17:16:45 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exit.h"

void	*ft_assert_nonnull(void *value)
{
	if (!value)
		ft_exit(EXIT_FAILURE);
	return (value);
}
