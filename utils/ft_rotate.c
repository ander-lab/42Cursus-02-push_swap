/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:03:44 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/04 16:28:29 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack **stack, char c)
{
	t_stack *aux_last;
	t_stack *aux_begin;

	aux_begin = *stack;
	*stack = (*stack)->next;
	aux_last = ft_lstlast_int(*stack);
	
}
