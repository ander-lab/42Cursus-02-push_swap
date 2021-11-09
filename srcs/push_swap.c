/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/09 17:12:42 by ajimenez         ###   ########.fr       */
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

void lk(void)
{
	system("leaks -q push_swap");
}

int	main(int ac, char **av)
{
	t_struct	*ps;
	t_stack		*stack_a = 0;
	t_stack		*stack_b = 0;

	atexit(lk);
	if (ac <= 2)
		return (0);
	ps = ft_calloc(sizeof(t_struct), 1);
	ft_print_stack(stack_a, stack_b);
	ft_add_stack_a(&stack_a, av);
	stack_b = ft_lstnew_int(0);
	get_stack_max_min(stack_a, ps);
	ft_print_stack(stack_a, stack_b);
	ft_sort_four(&stack_a, &stack_b, ps);
	ft_print_stack(stack_a, stack_b);
	free (stack_a);
	free (ps);
	return (0);
}
