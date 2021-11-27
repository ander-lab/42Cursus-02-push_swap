/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_int_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:39:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/27 18:28:55 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lst_penultimate(t_stack *stack)
{
	while (stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_mid_of_stack(t_stack *stack)
{
	size_t	size;

	size = ft_lstsize_int(stack) / 2;
	while (size && stack)
	{
		stack = stack->next;
		size--;
	}
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
