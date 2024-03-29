/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:56:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/11/28 19:24:31 by ajimenez         ###   ########.fr       */
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
	size_t	size_to_max;
	size_t	size_to_min;
}	t_struct;
/*
** TMP
*/
void	ft_print_stack(t_stack *stack_a, t_stack *stack_b);
void	printstack(t_stack *stack);

/*
** SORT FT'S
*/
void	ft_sort_two(t_stack	**stk);
void	ft_sort_three(t_stack **stack);
void	ft_sort_four(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
void	ft_sort_five(t_stack **stk_a, t_stack **stk_b, t_struct *ps);
void	ft_radix_sort(t_stack **a, t_stack **b);

/*
** ALGORITHMS UTILS
*/
void	ft_add_stack_a(t_stack **stack_a, t_stack **stack_b,
			t_struct *ps, char **av);
int		check_ordered(t_stack *stk);
int		get_stack_max(t_stack *stk);
int		get_stack_min(t_stack *stk);
void	ft_size_to_max(t_stack *stk, t_struct *ps);
size_t	ft_size_to_point(t_stack *stk, int content);
int		*ft_quick_sort(t_stack *a);
void	ft_free_push_swap(t_stack **stack_a, t_stack **stack_b, t_struct *ps);
/*
** PARSER
*/
size_t	ft_check_signs(char *str, t_stack **stk_a, t_struct *ps);
int		ft_check_repeat_nums(t_stack *stk);

/*
** MOVS UTILS
*/
void	ft_putmov(char a, char b, char c);
void	ft_swap(t_stack **stack, char c);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_push(t_stack **src, t_stack **dst, char c);
void	ft_rotate(t_stack **stack, char c);
void	ft_rev_rotate(t_stack **stack, char c);

/*
** LST INT FUNCTIONS
*/

t_stack	*ft_lstnew_int(int content);
int		ft_lstsize_int(t_stack *lst);
t_stack	*ft_lstlast_int(t_stack *lst);
t_stack	*ft_lst_penultimate(t_stack *stack);
void	ft_lstadd_front_int(t_stack **lst, t_stack *new);
void	ft_lstadd_back_int(t_stack **lst, t_stack *new);
int		*ft_lst_toa(t_stack *a);
void	ft_lstdelone_int(t_stack *lst, void (*del)(int));
void	ft_lstfree(t_stack **lst);

#endif
