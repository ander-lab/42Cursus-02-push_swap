/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/01 17:54:38 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <string.h>

void	ft_add_stack_a(t_struct *ps, char **av)
{
	size_t aux;

	aux = 0;
	while (av[++aux])
	{
		if (!ps->stack_a)
			ps->stack_a = ft_lstnew_int(ft_atoi(av[aux]));
		else if (ps->stack_a)
			ft_lstadd_back_int(&ps->stack_a, ft_lstnew_int(ft_atoi(av[aux])));
	}
		
}
int main(int ac, char **av)
{
	t_struct *ps;

	ps = calloc(sizeof(t_struct), 1);
	if (ac <= 1)
		return (0);
	ft_add_stack_a(ps, av);
	while (ps->stack_a)
	{
		printf(" %i\n", ps->stack_a->content);
		ps->stack_a = ps->stack_a->next;
	}
	printf("---	---\n a	 b\n");
	return (0);
}
