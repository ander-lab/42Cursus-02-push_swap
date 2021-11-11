/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:55:23 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/11 10:19:05 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_ordered(t_stack *stk)
{
	int	trigger;

	trigger = 0;
	while (stk->next != NULL )
	{
		if (stk->i < stk->next->i)
			trigger = 1;
		else
			break ;
		stk = stk->next;
	}
	return (trigger);
}

void	get_stack_max_min(t_stack *stk, t_struct *ps)
{
	get_stack_min(stk, ps);
	get_stack_max(stk, ps);
	ft_size_to_max(stk, ps);
}

void	ft_size_to_max(t_stack *stk, t_struct *ps)
{
	size_t	size;

	size = 0;
	while (stk->i != ps->max && stk->next)
	{
		stk = stk->next;
		size++;
	}
	ps->size_to_max = size;
}

void	ft_size_to_min(t_stack *stk, t_struct *ps)
{
	int	size;

	size = 0;
	while (stk->i != ps->min && stk->next)
	{
		stk = stk->next;
		size++;
	}
	ps->size_to_min = size;
}
