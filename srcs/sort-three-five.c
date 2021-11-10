/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-three-five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:05 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/10 13:31:56 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_stack **stk)
{
	int	aux[3];	

	aux[0] = (*stk)->i;
	aux[1] = (*stk)->next->i;
	aux[2] = (*stk)->next->next->i;
	if ((aux[0] > aux[1]) && (aux[1] < aux[2]) && (aux[0] < aux[2]))
		ft_swap(stk, 'a');
	else if ((aux[0] > aux[1]) && (aux[1] < aux[2]) && (aux[0] > aux[2]))
		ft_rotate(stk, 'a');
	else if ((aux[0] < aux[1]) && (aux[1] > aux[2]) && (aux[0] > aux[2]))
		ft_rev_rotate(stk, 'a');
	else if ((aux[0] < aux[1]) && (aux[1] > aux[2]) && (aux[0] < aux[2]))
	{
		ft_swap(stk, 'a');
		ft_rotate(stk, 'a');
	}
	else if ((aux[0] > aux[1]) && (aux[1] > aux[2]) && (aux[0] > aux[2]))
	{
		ft_swap(stk, 'a');
		ft_rev_rotate(stk, 'a');
	}
}


void	ft_sort_four(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	ft_size_to_min(*stk_a, ps);
	if (ps->size_to_min == 1)
		ft_swap(stk_a, 'a');
	else if (ps->size_to_min == 3)
		ft_rev_rotate(stk_a, 'a');
	else if (ps->size_to_min == 2)
	{
		ft_rotate(stk_a, 'a');
		ft_swap(stk_a, 'a');
	}
	ft_push(stk_a, stk_b, 'b');
	ft_sort_three(stk_a);
	ft_push(stk_b, stk_a, 'a');
}

void	ft_sort_five(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	if (ps->size_to_max == 1)
		ft_swap(stk_a, 'a');
	else if (ps->size_to_max == 4)
		ft_rev_rotate(stk_a, 'a');
	else if  (ps->size_to_max == 3)
	{
		ft_rev_rotate(stk_a, 'a');
		ft_rev_rotate(stk_a, 'a');
	}
	else if (ps->size_to_max == 2)
	{
		ft_rotate(stk_a, 'a');
		ft_swap(stk_a, 'a');
	}
	ft_push(stk_a, stk_b, 'b');
	ft_sort_four(stk_a, stk_b, ps);
	ft_push(stk_b, stk_a, 'a');
	ft_rotate(stk_a, 'a');
}
