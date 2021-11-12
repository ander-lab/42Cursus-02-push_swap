/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:58:46 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/12 12:45:38 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_stack *stack_a, t_stack *stack_b)
{
	printf("\nstack a------->");
	while (stack_a)
	{
		printf("%i", stack_a->i);
		stack_a = stack_a->next;
	}
	printf("\nstack b------->");
	while (stack_b)
	{
		printf("%i", stack_b->i);
		stack_b = stack_b->next;
	}
	printf("\n");
}

void	printstack(t_stack *stack)
{
	printf("\nstack ------->");
	while (stack)
	{
		printf("%i", stack->i);
		stack = stack->next;
	}
}
