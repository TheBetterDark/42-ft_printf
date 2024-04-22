/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:16:21 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/22 17:30:02 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_string(char *str)
{
	if (!str)
		return (ft_putstr_fd("(null)", 1));
	return (ft_putstr_fd(str, 1));
}
