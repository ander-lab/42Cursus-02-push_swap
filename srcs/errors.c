/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:56:04 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/27 13:29:39 by ajimenez         ###   ########.fr       */
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

size_t	ft_check_signs(char *str, t_stack **stk_a, t_stack **stk_b, t_struct *ps)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if ((str[i] == '+') || (str[i] == '-') || ((!ft_strchr("0123456789+- ", str[i])))) 
		{
			if ((!ft_strchr("0123456789+- ", str[i])))
				count += 2;
			count++;
		}
		i++;	
	}
	if (count > 1)
	{
		ft_putstr_fd("Error\n", 1); 
		ft_free_push_swap(stk_a, stk_b, ps)
		exit (0);
	}
	return (count);
}
