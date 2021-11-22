/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:46:38 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/22 16:34:47 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_lst_toa(t_stack *a)
{
	int	*array;
	int	aux;

	array = ft_calloc(ft_lstsize_int(a), sizeof(int));
	aux = 0;
	while (a)
	{
		array[aux] = a->i;
		a = a->next;
		aux++;
	}
	return (array);
}

int *ft_bubble_int(int *s, size_t prev, size_t next)
{
	int tmp;

	tmp = s[prev];
	s[prev] = s[next];
	s[next] = tmp;
	return (s);
}

int	*ft_quick_sort(t_stack *a)
{
	int	*sorted;
	size_t	prev;
	size_t	next;
	size_t	len;

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
		} prev++;
	}
	return (sorted);
}

void	ft_relative_numbers(t_stack	**a)
{
	int		i;
	int		len;
	t_stack	*aux;
	int *s;

	s = ft_quick_sort(*a);
	aux = *a;
	len = ft_lstsize_int(*a); 
	while (aux) 
	{
		i = 0;
		while (i < len)
		{
			if (s[i] == aux->i)
			{
				aux->i = *(int *)&i;
				break ;
			}
			i++;
		}
		aux = aux->next;
	}
}

void	ft_radix_sort(t_stack **a, t_stack **b)
{
	int	max_num;
	int	size;
	int	max_bits;
	int	j;
	int	i;

	ft_relative_numbers(a);
	printstack(*a);
	size = ft_lstsize_int(*a);
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (!(((*a)->i >> i) & 1))
				ft_push(a, b, 'b');
			else
				ft_rotate(a, 'a');
//TODO implemetar el punto mas cercano
			j++;
		}
		while (*b)
			ft_push(b, a, 'a');
		i++;
	}
}
