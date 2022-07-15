/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:22:02 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 16:29:05 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	rra(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[stack->len_a - 1];
	down_tab(stack->a, stack->len_a);
	stack->a[0] = tmp;
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "rra\n");
	else if (strcmp(stack->last_op, "rrb\n") == 0)
	{
		ft_strcpy(stack->last_op, "rrr\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "rra\n");
	}
}

void	rrb(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[stack->len_b - 1];
	down_tab(stack->b, stack->len_b);
	stack->b[0] = tmp;
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "rrb\n");
	else if (strcmp(stack->last_op, "rra\n") == 0)
	{
		ft_strcpy(stack->last_op, "rrr\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "rrb\n");
	}
}

void	rrr(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[stack->len_a - 1];
	down_tab(stack->a, stack->len_a);
	stack->a[0] = tmp;
	tmp = stack->b[stack->len_b - 1];
	down_tab(stack->b, stack->len_b);
	stack->b[0] = tmp;
	if (stack->last_op[0] != '\0')
		ft_printf("%s", stack->last_op);
	ft_strcpy(stack->last_op, "rrr\n");
}
