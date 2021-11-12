/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/12 19:02:15 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdlib.h>
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

void	lk(void)
{
	system("leaks -q push_swap");
}

void	ft_sort(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	size_t	stk_size;

	stk_size = ft_lstsize_int(*stk_a);
	if (stk_size == 3)
		ft_sort_three(stk_a);
	else if (stk_size == 4)
		ft_sort_four(stk_a, stk_b, ps);
	else if (stk_size == 5)
		ft_sort_five(stk_a, stk_b, ps);
}

int	main(int ac, char **av)
{
	t_struct	*ps;
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = 0;
	stack_b = 0;
	//atexit(lk);
	if (ac <= 2)
		return (0);
	ps = ft_calloc(sizeof(t_struct), 1);
	//ft_print_stack(stack_a, stack_b);
	ft_add_stack_a(&stack_a, av);
	stack_b = ft_lstnew_int(0);
	//if (check_ordered(stack_a) == 1)
	//	return (0);
	ft_print_stack(stack_a, stack_b);
	ft_put_on_top(&stack_a, &stack_b, ps);
//	ft_sort(&stack_a, &stack_b, ps);
	ft_print_stack(stack_a, stack_b);
	free (stack_a);
	free (ps);
	return (0);
}
