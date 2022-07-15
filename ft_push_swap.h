/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:38:13 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 17:43:01 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/ashes.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		len_a;
	int		len_b;
	char	*last_op;
}	t_stack;

typedef struct s_group
{
	int	*group;
	int	len_group;
	int	remain_int;
}	t_group;

/* move */
/* ft_swap */
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
/* ft_push */
void	pa(t_stack *stack);
void	pb(t_stack *stack);
/* ft_move_tab */
void	up_tab(int *tab, int nb_nbr);
void	down_tab(int *tab, int nb_nbr);
void	put_int_up_a(t_stack *stack, int nb);
void	put_int_up_b(t_stack *stack, int nb);
void	put_up(t_stack *stack, int min, char c);
/* ft_move_tri */
void	put_goodint_up_b(t_stack *stack);
/* ft_rotate */
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
/* ft_reverse_rotate */
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
/* ft_move_tab */
void	put_maxmin_a(t_stack *s, int max, int min);
/* utilities */
/* ft_check */
int		check(char **argv, int argc);
int		ft_check(char **stack, int argc);
int		ft_check_number(char *stack);
int		ft_check_int(char *stack);
int		ft_check_duplicates(char **stack, int argc);
/* ft_free */
void	free_split(char **split);
void	free_stack(t_stack *stack);
void	free_group(t_group *g);
/* ft_print_stack */
void	ft_print_stack(t_stack *stack, char *c);
void	ft_print_stack_a(t_stack *stack);
void	ft_print_stack_b(t_stack *stack);
/* ft_utils */
int		len_split(char **split);
int		find_nb(int *tab, int len, int nb);
int		top(t_stack *stack, t_group *g);
int		bottom(t_stack *stack, t_group *g);
/* ft_find_near */
int		find_near_exit(t_stack *stack, int top, int bottom);
int		find_near_exit_500(t_stack *stack, int top, int bottom);
/* ft_construct_struct */
t_stack	*create_stack(int argc, char **argv);
t_stack	*init_stack(int len, char **arg, t_stack *stack);
t_group	*create_group(t_stack *stack);
void	init_group(t_group *g, t_stack *stack);
/* ft_is_sort */
int		is_sort_final(t_stack *stack);
int		is_sort(int *tab, int len);
/* ft_search */
int		find_min(int *tab, int len);
int		find_max(int *tab, int len);
int		find_next_min(int *tab, int len, int prev_min);
int		find_prev_min(int *tab, int len, int next_min);
int		find_prev_max(int *tab, int len, int max);
/* ft_count_operation */
int		count_ope(int *tab, int len, int nb);
int		nb_ope_tb(t_stack *s, int nb, int index_nb);
/* tri */
/* ft_push_swap */
void	ft_push_swap(t_stack *stack);
/* ft_three_four_five */
void	tri_three(t_stack *stack);
void	tri_four(t_stack *stack);
void	tri_five(t_stack *stack);
/* ft_tri_hundred */
void	tri_hundred(t_stack *stack);
void	put_back(t_stack *s);
/* ft_tri_five_hundred */
void	tri_five_hundred(t_stack *s);
#endif
