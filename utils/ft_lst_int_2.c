/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_int_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:39:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/05 17:46:23 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
void	ft_lstdelone_int(t_stack *lst, void (*del)(int *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear_int(t_stack **lst, void (*del)(void *))
{
	t_stack	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone_int(*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
*/
t_stack	*ft_lst_penultimate(t_stack *stack)
{
	while (stack->next->next != NULL)
	{
/*		if (stack->next->next == NULL)
		{
			//stack = stack->next;
			return(stack);
			//break;
		}*/
		stack = stack->next;
	}
	return(stack);
}
