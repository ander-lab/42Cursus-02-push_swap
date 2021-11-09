/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:41:18 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/09 17:11:25 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lstnew_int(int content)
{
	t_stack	*lstnew;

	lstnew = malloc(sizeof(t_stack));
	if (!lstnew)
		return (0);
	lstnew->i = content;
	lstnew->next = NULL;
	return (lstnew);
}

int	ft_lstsize_int(t_stack *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_stack	*ft_lstlast_int(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_front_int(t_stack **lst, t_stack *new)
{

	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back_int(t_stack **lst, t_stack *new)
{
	t_stack	*back;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	back = ft_lstlast_int(*lst);
	back->next = new;
}
