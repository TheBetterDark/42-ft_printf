/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:40:15 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/14 22:58:37 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
