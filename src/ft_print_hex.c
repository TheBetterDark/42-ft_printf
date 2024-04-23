/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:16:24 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/23 15:36:56 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_uppercase(char *str);

int	ft_print_hex(unsigned int n, bool uppercase)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_tobase(n, 16);
	if (!str)
		return (-1);
	if (uppercase)
		str = ft_uppercase(str);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

static char	*ft_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
