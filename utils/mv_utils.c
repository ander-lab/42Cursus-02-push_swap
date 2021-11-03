/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:57:05 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 10:05:44 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_put_rr(char c)
{
	if (c == 'r')
		write (1, "rrr\n", 4);
	else if (c == 'a')
		write (1, "rra\n", 4);
	else if (c == 'b')
		write (1, "rrb\n", 4);
}

void	ft_putmov(char a, char b, char c)
{
	if (b == 'a' && c == 'x')
	{
		if (a == 'r')
			write (1, "ra\n", 3);
		else if (a == 'p')
			write (1, "pa\n", 3);
		else if (a == 's')
			write (1, "sa\n", 3);
	}
	else if (b == 'b' && c == 'x')
	{
		if (a == 'r')
			write (1, "rb\n", 3);
		else if (a == 'p')
			write (1, "pb\n", 3);
		else if (a == 's')
			write (1, "sb\n", 3);
	}
	else if (b == 'r')
		ft_put_rr(c);
}
