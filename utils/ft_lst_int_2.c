/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_int_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:39:34 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/12 13:40:23 by ajimenez         ###   ########.fr       */
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

	size = ft_lstsize_int(stack)/2;
	while (size && stack)
	{
		stack = stack->next;
		size--;
	}
	return (stack);
}
