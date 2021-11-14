/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:58 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/14 19:08:59 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_stack_max(t_stack *stk, t_struct *ps)
{
	ps->max = stk->i;
	while (stk)
	{
		if (ps->max < stk->i)
			ps->max = stk->i;
		stk = stk->next;
	}
}

int	get_stack_min(t_stack *stk)
{
	int	min;

	min = stk->i;
	while (stk)
	{
		if (min > stk->i)
			min = stk->i;
		stk = stk->next;
	}
	return (min);
}

int	get_stack_other_min(t_stack *stk)
{
	int	sec_min;

	sec_min = stk->i;
	while (stk)
	{
		if ((sec_min > stk->i) && (get_stack_min(stk) != stk->i))
			sec_min = stk->i;
		stk = stk->next;
	}
	return (sec_min);
}

size_t	dist_top(t_stack *stk, int content)
{
	size_t	size_of_list;
	size_t	size_to_point;
	size_t	distop;

	size_of_list = ft_lstsize_int(stk);
	size_to_point = ft_size_to_point(stk, content);
	distop = (size_of_list - size_to_point - size_to_point);
	if (distop < 0)
		distop *= -1;
	return (distop);
}
