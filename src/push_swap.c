/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:17:40 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/28 17:16:10 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <string.h>

int main(int ac, char **av)
{
	char **clean;
	size_t aux;
	int	tmp;
	t_list *a;
	t_list *b;

	aux = 1;
	if (ac <= 1)
		return (0);
	while (aux < ac - 1 )
	{
		aux++;
	}
	aux = 0;
	while (av[aux])
	{
		tmp = ft_atoi(av[aux]);
		ft_lstadd_back(&a, ft_lstnew_int(tmp));
		aux++;
	}
	return (0);
}
