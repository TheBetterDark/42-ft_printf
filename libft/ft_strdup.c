/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:12:46 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/14 18:24:42 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to a duplicate of the string s.
char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen(s) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s, ft_strlen(s) + 1);
	return (dst);
}
