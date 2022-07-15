/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:18:08 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 16:19:38 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ra(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	up_tab(stack->a, stack->len_a);
	stack->a[stack->len_a - 1] = tmp;
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "ra\n");
	else if (strcmp(stack->last_op, "rb\n") == 0)
	{
		ft_strcpy(stack->last_op, "rr\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "ra\n");
	}
}

void	rb(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[0];
	up_tab(stack->b, stack->len_b);
	stack->b[stack->len_b - 1] = tmp;
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "rb\n");
	else if (strcmp(stack->last_op, "ra\n") == 0)
	{
		ft_strcpy(stack->last_op, "rr\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "rb\n");
	}
}

void	rr(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	up_tab(stack->a, stack->len_a);
	stack->a[stack->len_a - 1] = tmp;
	tmp = stack->b[0];
	up_tab(stack->b, stack->len_b);
	stack->b[stack->len_b - 1] = tmp;
	if (stack->last_op[0] != '\0')
		ft_printf("%s", stack->last_op);
	ft_strcpy(stack->last_op, "rr\n");
}
