/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:45:06 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/22 21:59:00 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_number(int n, int is_signed)
{
	if (is_signed)
		return (ft_putnbr_fd(n, 1));
	else
		return (ft_uputnbr_fd(n, 1));
}
