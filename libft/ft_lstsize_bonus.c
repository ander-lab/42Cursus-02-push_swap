/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:31:18 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/28 13:32:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_stack	*ft_lstnew_int(int content)
{
	t_stack	*lstnew;

	lstnew = malloc(sizeof(t_stack));
	if (!lstnew)
		return (0);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}


