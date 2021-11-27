/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-five-to-one-hundred.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:52:28 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/27 18:31:23 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
void	ft_sort_5_to_100(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	ft_put_mins_on_top_and_pb(stk_a, stk_b, ps);
	ft_put_max_on_top_and_pa(stk_a, stk_b, ps);
}

void	ft_put_max_on_top_and_pa(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	while ((*stk_b)->next != NULL && !check_ordered(*stk_a))
	{
		ps->max = get_stack_max(*stk_a);
		if (check_num_side(*stk_a, ps->max))
		{
			ft_rotate(stk_a, 'a');
		}
		else if (!check_num_side(*stk_a, ps->max))
		{
			ft_rev_rotate(stk_a, 'a');
		}
		if ((*stk_a)->i == ps->max)
			ft_push(stk_b, stk_a, 'a');
		printf("cebado01\n");
	}

}

void	ft_put_mins_on_top_and_pb(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	priority(*stk_a, ps);
	while ((*stk_a)->next != NULL)
	{
		if (check_num_side(*stk_a, ps->tomove))
		{
			ft_rotate(stk_a, 'a');
		}
		else if (!check_num_side(*stk_a, ps->tomove))
		{
			ft_rev_rotate(stk_a, 'a');
		}
		if ((*stk_a)->i == ps->tomove)
		{
			ft_push(stk_a, stk_b, 'b');
			priority(*stk_a, ps);
		}
		//if ((*stk_a)->next != NULL)
		//	break ;
	}
}

void	priority(t_stack *stk, t_struct *ps)
{
	if (dist_top(stk, get_stack_other_min(stk)[1]) > dist_top(stk, 
		get_stack_other_min(stk)[0]))
		ps->tomove = get_stack_other_min(stk)[1];
	else
		ps->tomove = get_stack_other_min(stk)[0];
}

Check num return 0 if the number to move is in the first mid of the stack, 
 * return 1 if is in the second mid

int	check_num_side(t_stack *stack, int tocheck)
{
	size_t	aux;

	aux = 0;
	while (stack && stack != ft_mid_of_stack(stack))
	{
		if (tocheck == stack->i)
			return (1);
		stack = stack->next;
		aux++;
	}
	return (0);
}*/
