/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:49:44 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/03 17:26:40 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push(t_stack **src, t_stack **dst, char c)
{
	t_stack *aux;

	if (!*dst)
		*dst = ft_lstnew_int((*src)->content);
	else if (*dst)
		ft_lstadd_front_int(dst, ft_lstnew_int((*src)->content));
	aux = *src;
	*src = aux->next;
	free(aux);
	ft_putmov('p', c, 'x');
}
