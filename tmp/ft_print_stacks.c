/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:58:46 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 12:53:42 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a)
	{
		printf(" %i        %i\n", stack_a->content, stack_b->content);
		stack_a = stack_a->next;
	}
	printf("-------	-------\n a	 b\n");
}
