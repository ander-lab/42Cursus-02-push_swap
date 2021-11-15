/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:58 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/15 16:51:11 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_stack_max(t_stack *stk)
{
	int	max;

	max = stk->i;
	while (stk)
	{
		if (max < stk->i)
			max = stk->i;
		stk = stk->next;
	}
	return (max);
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

int	*get_stack_other_min(t_stack *stk)
{
	int	*min;

	min = malloc(sizeof(int) * 2);
	if (!min)
		return (NULL);
	min[0] = stk->i;
	while (stk)
	{
		if (min[0] > stk->i)
		{
			min[1] = min[0];
			min[0] = stk->i;
		}
		if (min[1] > stk->i && min[0] < stk->i)
			min[1] = stk->i;
		stk = stk->next;
	}
	return (min);
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
