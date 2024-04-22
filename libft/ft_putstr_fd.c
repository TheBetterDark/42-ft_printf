/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:57:08 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/22 17:34:52 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the given file descriptor.
int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return (ft_putstr_fd("(null)", fd));
	len = ft_strlen(s);
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	return (len);
}
