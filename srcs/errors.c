/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:56:04 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/26 17:30:29 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_push_swap(t_stack **stack_a, t_stack **stack_b, t_struct *ps)
{
	free (*stack_a);
	ft_lstfree(stack_a);
	ft_lstfree(stack_b);
	free (ps);
}
