/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/08 09:52:53 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <string.h>

void	ft_add_stack_a(t_stack **stack_a, char **av)
{
	size_t	aux;

	aux = 1;
	while (av[aux])
	{
		ft_lstadd_back_int(stack_a, ft_lstnew_int(ft_atoi(av[aux])));
		aux++;
	 }
}

int	main(int ac, char **av)
{
	t_struct	*ps;
	t_stack		*stack_a = 0;
	t_stack		*stack_b = 0;

	ps = ft_calloc(sizeof(t_struct), 1);
	if (ac <= 2)
		return (0);
	ft_print_stack(stack_a, stack_b);
	ft_add_stack_a(&stack_a, av);
	stack_b = ft_lstnew_int(0);
	ft_print_stack(stack_a, stack_b);
	ft_sort_three(&stack_a);
	ft_print_stack(stack_a, stack_b);
	return (0);
}
