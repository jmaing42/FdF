/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:50:32 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/12 13:41:44 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <stddef.h>

# include "ft_types.h"

t_err	ft_io_write(
			int fd,
			const void *buf,
			size_t len);

t_err	ft_io_puts(
			int fd,
			const char *buffer);

#endif
