/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:07:03 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/24 17:17:09 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Funcion main que compruebe todos los posibles errores en los args
	//TODO -----> ERRORES: Numeros repetidos
	//TODO -----> ERRORES: Is digit pero si hay un simbolo hay que saltarselo (atoi is digit?)
	//TODO -----> ERRORES: Letras en medio de numeros
//TODO Funcion para splitear los args del main y meterlos en la lista

#include "../includes/push_swap.h"

void	ft_add_stack_a(t_stack **stack_a, char **av)
{
	size_t	aux;
	int		num;

	aux = 1;
	while (av[aux])
	{
		if (ft_)
		ft_lstadd_back_int(stack_a, ft_lstnew_int(ft_atoi(av[aux])));
		aux++;
	}
}
