/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:55:23 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/28 19:18:09 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stddef.h>

int	check_ordered(t_stack *stk)
{
	int	trigger;

	trigger = 1;
	while (stk->next != NULL )
	{
		if (stk->i > stk->next->i)
			return (0);
		stk = stk->next;
	}
	return (trigger);
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

size_t	ft_size_to_point(t_stack *stk, int point)
{
	size_t	size;

	size = 0;
	while (stk->i != point && stk->next)
	{
		stk = stk->next;
		size++;
	}
	return (size);
}
