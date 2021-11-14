/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:58 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/14 18:31:36 by ajimenez         ###   ########.fr       */
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

void	get_stack_min(t_stack *stk, t_struct *ps)
{
	ps->min = stk->i;
	while (stk)
	{
		if (ps->min > stk->i)
			ps->min = stk->i;
		stk = stk->next;
	}
}

void	get_stack_other_min(t_stack *stk, t_struct *ps)
{
	get_stack_min(stk, ps);
	ps->sec_min = stk->i;
	int i = 1;
	while (stk)
	{
		printf("%i %i %i\n", i, stk->i, ps->sec_min);
		//printf("\nel min es :%i \nel otro min es:%i\n", ps->min, ps->sec_min);
		if ((ps->sec_min > stk->i) && (ps->sec_min > ps->min))
		{
			ps->sec_min = stk->i;
		//	printf("%i\n", stk->i);
		}
		stk = stk->next;
		i++;
	}
}
