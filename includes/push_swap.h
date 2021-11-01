/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:05:27 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/01 17:48:27 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}				t_stack;

typedef struct s_struct
{
	/*Revisar que datos necesito para el algoritmo*/
	t_stack *stack_a;
	t_stack *stack_b;
}	t_struct;

void ft_putmov(char a, char b, char c);

/*
** LST INT FUNCTIONS
*/

t_stack	*ft_lstnew_int(int content);
int		ft_lstsize_int(t_stack *lst);
t_stack	*ft_lstlast_int(t_stack *lst);
void	ft_lstadd_front_int(t_stack **lst, t_stack *new);
void	ft_lstadd_back_int(t_stack **lst, t_stack *new);

#endif
