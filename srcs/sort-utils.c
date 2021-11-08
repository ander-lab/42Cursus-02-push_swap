/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:55:23 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/08 15:50:58 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_stack_max_min(t_stack **stk, t_struct *ps)
{
	get_stack_min(stk, ps);
	get_stack_max(stk, ps);
}
