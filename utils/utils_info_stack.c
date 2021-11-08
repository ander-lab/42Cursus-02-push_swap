/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:58 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/08 15:26:21 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_stack_max(t_stack **stk, t_struct *ps)
{
	ps->max = (*stk)->i;
	while ((*stk)->next)
	{
		 (*stk) = (*stk)->next;
		 if (ps->max < (*stk)->i)
			ps->max = (*stk)->i;
	}
}

void	get_stack_min(t_stack **stk, t_struct *ps)
{
	ps->min = (*stk)->i;
	while ((*stk)->next)
	{
		 (*stk) = (*stk)->next;
		 if (ps->min > (*stk)->i)
			ps->max = (*stk)->i;
	}
}
