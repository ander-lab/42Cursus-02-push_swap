/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:58:46 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 09:59:13 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_struct *ps)
{
	while (ps->stack_a)
	{
		printf(" %i        %i\n", ps->stack_a->content, ps->stack_b->content);
		ps->stack_a = ps->stack_a->next;
	}
	printf("-------	-------\n a	 b\n");
}
