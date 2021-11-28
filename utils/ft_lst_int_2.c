/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_int_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:39:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/28 19:23:35 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lst_penultimate(t_stack *stack)
{
	while (stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

int	*ft_lst_toa(t_stack *a)
{
	int	*array;
	int	aux;

	array = ft_calloc(ft_lstsize_int(a), sizeof(int));
	aux = 0;
	while (a)
	{
		array[aux] = a->i;
		a = a->next;
		aux++;
	}
	return (array);
}

void	ft_lstfree(t_stack **lst)
{
	t_stack	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		free((*lst));
	}
	*lst = NULL;
}
