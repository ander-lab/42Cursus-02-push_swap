/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:58 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/28 19:20:41 by ajimenez         ###   ########.fr       */
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
