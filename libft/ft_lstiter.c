/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 02:44:08 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/14 18:06:02 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	unsigned int	i;

	i = 0;
	if (!lst || !f)
		return ;
	f(lst->content);
	if (lst->next)
		ft_lstiter(lst->next, f);
}
