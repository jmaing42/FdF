/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:50:32 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/12 13:38:07 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

#include <unistd.h>

#include "wrap.h"

#define WRITE_SIZE_MAX 1048576

t_err	ft_io_write(
	int fd,
	const void *buf,
	size_t len
)
{
	size_t		remain;
	size_t		to_write;
	ssize_t		wrote;
	const char	*str;

	str = (const char *) buf;
	remain = len;
	while (remain)
	{
		to_write = remain;
		if (to_write > WRITE_SIZE_MAX)
			to_write = WRITE_SIZE_MAX;
		wrote = wrap_write(fd, str, to_write);
		if (wrote < 0)
			return (true);
		remain -= (size_t) wrote;
		str = str + wrote;
	}
	return (false);
}
