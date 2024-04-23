/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:21 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/23 15:32:58 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);

int	ft_print_hex(unsigned int n, bool uppercase);
int	ft_print_number(int n, int is_signed);
int	ft_print_pointer(void *ptr);
int	ft_print_string(char *str);
int	ft_print_char(char c);

#endif