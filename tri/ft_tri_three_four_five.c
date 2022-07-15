/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_three_four_five.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:10:37 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 17:44:32 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	tri_three(t_stack *stack)
{
	if ((stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
			&& stack->a[2] > stack->a[0])
		|| (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2]
			&& stack->a[2] < stack->a[0])
		|| (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
			&& stack->a[2] > stack->a[0]))
		sa(stack);
	if (is_sort(stack->a, stack->len_a) == 0)
	{
		ft_printf("%s", stack->last_op);
		stack->last_op[0] = '\0';
		return ;
	}
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[2] < stack->a[0])
		ra(stack);
	else
		rra(stack);
	ft_printf("%s", stack->last_op);
	stack->last_op[0] = '\0';
}

void	tri_four(t_stack *stack)
{
	if (is_sort_final(stack) == 0)
		return ;
	put_up(stack, find_min(stack->a, stack->len_a), 'a');
	pb(stack);
	tri_three(stack);
	pa(stack);
	ft_printf("%s", stack->last_op);
	stack->last_op[0] = '\0';
}

void	tri_five(t_stack *stack)
{
	if (is_sort_final(stack) == 0)
		return ;
	put_up(stack, find_min(stack->a, stack->len_a), 'a');
	pb(stack);
	tri_four(stack);
	pa(stack);
	ft_printf("%s", stack->last_op);
	stack->last_op[0] = '\0';
}
