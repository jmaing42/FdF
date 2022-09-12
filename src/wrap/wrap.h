/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:39:06 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/09/12 13:40:59 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRAP_H
# define WRAP_H

# include <stddef.h>
# include <unistd.h>

void	*wrap_malloc(size_t size);
void	wrap_free(void *memory);
ssize_t	wrap_write(int fd, const void *buffer, size_t bytes);
ssize_t	wrap_read(int fd, void *buffer, size_t bytes);

# ifdef __GNUC__

__attribute__((noreturn))

# endif

void wrap_exit(int status);

# endif
