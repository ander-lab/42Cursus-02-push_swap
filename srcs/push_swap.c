/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/28 19:16:37 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdlib.h>
#include <string.h>

void	lk(void)
{
	system("leaks -q push_swap");
}

static void	ft_sort(t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	size_t	stk_size;

	if (check_ordered(*stk_a))
		return ;
	if (!ft_check_repeat_nums(*stk_a))
	{
		ft_putstr_fd("Error\n", 1);
		return ;
	}
	stk_size = ft_lstsize_int(*stk_a);
	if (stk_size == 2)
		ft_sort_two(stk_a);
	else if (stk_size == 3)
		ft_sort_three(stk_a);
	else if (stk_size == 4)
		ft_sort_four(stk_a, stk_b, ps);
	else if (stk_size == 5)
		ft_sort_five(stk_a, stk_b, ps);
	else if (stk_size > 5)
		ft_radix_sort(stk_a, stk_b);
}

int	main(int ac, char **av)
{
	t_struct	*ps;
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = 0;
	stack_b = 0;
	//atexit(lk);
	if (ac < 2)
		return (0);
	ps = ft_calloc(sizeof(t_struct), 1);
	ft_add_stack_a(&stack_a, &stack_b, ps, av);
	ft_sort(&stack_a, &stack_b, ps);
	//ft_print_stack(stack_a, stack_b);
	//ft_free_push_swap(&stack_a, &stack_b, ps);
	printstack(stack_a);
	return (0);
}
