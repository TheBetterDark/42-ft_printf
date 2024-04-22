/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:21:38 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/22 19:32:48 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int		len;
	char	*str;

	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	len = ft_putstr_fd("0x", 1);
	str = ft_tobase((unsigned long)ptr, 16);
	if (!str)
		return (-1);
	len += ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
