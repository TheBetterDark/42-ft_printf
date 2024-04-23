/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:22:39 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/23 15:22:59 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_parse(const char format, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		ret;

	len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
			ret = ft_parse(*++format, args);
		else
			ret = ft_putchar_fd(*format, 1);
		if (ret == -1)
			return (-1);
		len += ret;
		format++;
	}
	va_end(args);
	return (len);
}

static int	ft_parse(const char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_number(va_arg(args, int), true));
	else if (format == 'u')
		return (ft_print_number(va_arg(args, unsigned int), false));
	else if (format == 'X' || format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), format == 'X'));
	else if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format == '%')
		return (ft_putchar_fd('%', 1));
	else
		return (-1);
}
