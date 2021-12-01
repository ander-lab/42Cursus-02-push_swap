/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:07:03 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/01 14:50:20 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	exit_atoi(t_stack **stack_a)
{
	free (*stack_a);
	ft_lstfree(stack_a);
	ft_putstr_fd("Error\n", 1);
	exit (0);
}

static int	atoch(t_stack **stack_a, const char *str)
{
	int				i;
	int				s;
	unsigned int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		if ((r > 2147483647 && s == 1) || (r > 2147483648 && s == -1))
			exit_atoi(stack_a);
		i++;
	}
	return (r * s);
}

static void	ft_add_splitted_args(t_stack **stack_a, char **av, size_t aux,
		t_struct *ps)
{
	size_t	i;
	char	**num;

	i = 0;
	num = ft_split(av[aux], ' ');
	while (num[i])
	{
		ft_check_signs(av[aux], stack_a, ps);
		ft_lstadd_back_int(stack_a, ft_lstnew_int(atoch(stack_a, num[i])));
		i++;
	}
}

void	ft_add_stack_a(t_stack **stack_a, t_stack **stack_b,
		t_struct *ps, char **av)
{
	size_t	aux;

	aux = 1;
	while (av[aux])
	{
		if (ft_iter_str_bool(av[aux], &ft_isalpha) || \
			!ft_iter_str_bool(av[aux], &ft_isdigit))
		{
			ft_putstr_fd("Error\n", 1);
			ft_free_push_swap(stack_a, stack_b, ps);
			exit (0);
		}
		if (ft_iter_str_bool(av[aux], &ft_isspace))
			ft_add_splitted_args(stack_a, av, aux, ps);
		else
		{
			ft_check_signs(av[aux], stack_a, ps);
			ft_lstadd_back_int(stack_a, ft_lstnew_int(atoch(stack_a, av[aux])));
		}
		aux++;
	}
}
