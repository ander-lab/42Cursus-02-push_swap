/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-five-to-one-hundred.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:52:28 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/12 19:04:23 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
void	ft_sort_5_to_100(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	while (stk_a)
	{
	}
}
*/
void	ft_put_on_top(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	while ((*stk_a)->next != NULL)
	{
		get_stack_min(*stk_a, ps);
		if (!check_num_side(*stk_a, ps))
			ft_rotate((stk_a), 'a');
		else if (check_num_side(*stk_a, ps))
			ft_rev_rotate(stk_a, 'a');
		if ((*stk_a)->i == ps->min)
			ft_push(stk_a, stk_b, 'b');
	}
}

int	check_num_side(t_stack *stack, t_struct *ps)
{
	while (stack && stack != ft_mid_of_stack(stack))
	{
		if (ps->min == stack->i)
			return (0);
		stack = stack->next;
	}
	return (1);
}
