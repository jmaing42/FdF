/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:10:15 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/07/31 15:36:07 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXIT_H
# define FT_EXIT_H

# include <stdlib.h>

typedef void	(*t_ft_exit_cleanup_function)();

# ifdef __GNUC__

__attribute__((noreturn))

# endif

int ft_exit(signed char status);
void	ft_set_exit_handler(void (*cleanup)());

# endif
