/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:56:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/14 20:37:28 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				i;
	struct s_stack	*next;
}				t_stack;

/*Revisar que datos necesito para el algoritmo*/
typedef struct s_struct
{
	int		max;
	int		min;
	int		sec_min;
	size_t	size_to_max;
	size_t	size_to_min;
	size_t	distop;
	int		tomove;
}	t_struct;
/*
** TMP
*/
void	ft_print_stack(t_stack *stack_a, t_stack *stack_b);
void	printstack(t_stack *stack);

/*
** SORT FT'S
*/
void	ft_sort_three(t_stack **stack);
void	ft_sort_four(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
void	ft_sort_five(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
void	ft_sort_5_to_100(t_stack **stk_a, t_stack **stk_b, t_struct *ps);

/*
** ALGORITHMS UTILS
*/
int		check_ordered(t_stack *stk);
int		get_stack_max(t_stack *stk);
int		get_stack_min(t_stack *stk);
int		get_stack_other_min(t_stack *stks);
void	get_stack_max_min(t_stack *stk, t_struct *ps);
void	ft_size_to_max(t_stack *stk, t_struct *ps);
size_t	ft_size_to_point(t_stack *stk, int content);
t_stack	*ft_mid_of_stack(t_stack *stack);
t_stack	*ft_quarter_of_stack(t_stack *stack);
t_stack	*ft_last_quarter_of_stack(t_stack *stack);
//int		check_num_side(t_stack *stack, t_struct *ps);
int		check_num_side(t_stack *stack, int tocheck);
void	ft_put_mins_on_top_and_pb(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
void	ft_put_max_on_top_and_pa(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
size_t	dist_top(t_stack *stk, int content);
void	priority(t_stack *stk, t_struct *ps);

/*
** MOVS UTILS
*/
void	ft_putmov(char a, char b, char c);
void	ft_swap(t_stack **stack, char c);
void	ft_push(t_stack **src, t_stack **dst, char c);
void	ft_rotate(t_stack **stack, char c);
void	ft_rev_rotate(t_stack **stack, char c);
;
/*
** LST INT FUNCTIONS
*/

t_stack	*ft_lstnew_int(int content);
int		ft_lstsize_int(t_stack *lst);
t_stack	*ft_lstlast_int(t_stack *lst);
t_stack	*ft_lst_penultimate(t_stack *stack);
void	ft_lstadd_front_int(t_stack **lst, t_stack *new);
void	ft_lstadd_back_int(t_stack **lst, t_stack *new);

#endif
