/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:03:44 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/13 11:10:12 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack **stack, char c)
{
	t_stack	*last;
	t_stack	*aux_begin;

	aux_begin = *stack;
	*stack = (*stack)->next;
	last = ft_lstlast_int(*stack);
	last->next = aux_begin;
	aux_begin->next = NULL;
	ft_putmov('r', c, 'x');
}

void	ft_rev_rotate(t_stack **stack, char c)
{
	t_stack	*aux_last;

	aux_last = ft_lst_penultimate(*stack);
	ft_lstadd_front_int(stack, ft_lstlast_int(*stack));
	aux_last->next = NULL;
	ft_putmov('r', 'r', c);
}
