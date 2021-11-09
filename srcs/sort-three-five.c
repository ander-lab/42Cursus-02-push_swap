/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-three-five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:05 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/09 16:54:55 by ajimenez         ###   ########.fr       */
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

size_t	ft_size_to_max(t_stack *stk, t_struct *ps)
{
	size_t size;

	size = 0;
	while ((stk->i != ps->max) && (stk->next))
	{
		stk = stk->next;
		size++;
	}
	return(size);
}

int	ft_size_to_min(t_stack *stk, t_struct *ps)
{
	int size;

	size = 0;
	while (stk->i != ps->min && stk->next)
	{
		stk = stk->next;
		size++;
	}
	return(size);
}

void	ft_sort_four(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	int size;

	size = ft_size_to_min(*stk_a, ps);
	if (size == 1)
		ft_swap(stk_a, 'a');
	else if (size == 3)
		ft_rev_rotate(stk_a, 'a');
	else if (size == 2)
	{
		ft_rotate(stk_a, 'a');
		ft_swap(stk_a, 'a');
	}
	ft_push(stk_a, stk_b, 'b');
	ft_sort_three(stk_a);
	ft_push(stk_b, stk_a, 'a');

}

//void	ft_sort_five(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
//{
//}
