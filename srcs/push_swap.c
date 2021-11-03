/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 17:42:36 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <string.h>

void	ft_add_stack_a(t_struct *ps, char **av)
{
	size_t	aux;

	aux = 0;
	while (av[++aux])
	{
		if (!ps->stack_a)
			ps->stack_a = ft_lstnew_int(ft_atoi(av[aux]));
		else if (ps->stack_a)
			ft_lstadd_back_int(&ps->stack_a, ft_lstnew_int(ft_atoi(av[aux])));
	}
}

int	main(int ac, char **av)
{
	t_struct	*ps;

	ps = ft_calloc(sizeof(t_struct), 1);
	if (ac <= 2)
		return (0);
	ft_add_stack_a(ps, av);
	ps->stack_b = ft_lstnew_int(0);
	ft_print_stack(ps->stack_a, ps->stack_b);
	ft_swap(&ps->stack_a, 'a');
	ft_push(&ps->stack_a, &ps->stack_b, ' ');
	ft_print_stack(ps->stack_a, ps->stack_b);
	return (0);
}
