/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:43:06 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/27 18:30:22 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	*ft_bubble_int(int *s, size_t prev, size_t next)
{
	int	tmp;

	tmp = s[prev];
	s[prev] = s[next];
	s[next] = tmp;
	return (s);
}

int	*ft_quick_sort(t_stack *a)
{
	size_t	prev;
	size_t	next;
	size_t	len;
	int		*sorted;

	sorted = ft_lst_toa(a);
	len = ft_lstsize_int(a);
	prev = 0;
	while (prev < len)
	{
		next = prev + 1;
		while (next < len)
		{
			if (sorted[prev] > sorted[next])
				sorted = ft_bubble_int(sorted, prev, next);
			next++;
		}
		prev++;
	}
	return (sorted);
}
