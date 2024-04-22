/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:01:00 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/22 22:05:43 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the integer 'n' to the given file descriptor.
Returns the number of characters printed.
*/
int	ft_uputnbr_fd(int n, int fd)
{
	unsigned int	num;
	int				len;

	len = 0;
	num = (unsigned int)n;
	if (num >= 10)
		len += ft_uputnbr_fd(num / 10, fd);
	ft_putchar_fd(num % 10 + '0', fd);
	len++;
	return (len);
}
