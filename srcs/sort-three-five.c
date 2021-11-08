/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-three-five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:05 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/08 15:42:18 by ajimenez         ###   ########.fr       */
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

void	ft_sort_five(t_stack **stk)
{
	int	aux[3];	

	aux[0] = (*stk)->i;
	aux[1] = (*stk)->next->i;
	
}
