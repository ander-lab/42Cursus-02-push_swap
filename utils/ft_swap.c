/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:39:39 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 13:45:56 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stack **stack, char c)
{
	t_stack	*aux_begin;

	aux_begin = *stack;
	*stack = (*stack)->next;
	aux_begin->next = (*stack)->next;
	(*stack)->next = aux_begin;
	ft_putmov('s', c, 'x');
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a,'x');
	ft_swap(stack_b, 'x');
	write (1, "ss\n", 3);
}
