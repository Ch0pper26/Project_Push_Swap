/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:08:06 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 13:43:38 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	if (stack->len_a > 1)
	{
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
	}
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "sa\n");
	else if (strcmp(stack->last_op, "sb\n") == 0)
	{
		ft_strcpy(stack->last_op, "ss\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "sa\n");
	}
}

void	sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[0];
	if (stack->len_b > 1)
	{
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
	}
	if (stack->last_op[0] == '\0')
		ft_strcpy(stack->last_op, "sb\n");
	else if (strcmp(stack->last_op, "sa\n") == 0)
	{
		ft_strcpy(stack->last_op, "ss\n");
	}
	else
	{
		ft_printf("%s", stack->last_op);
		ft_strcpy(stack->last_op, "sb\n");
	}
}

void	ss(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	if (stack->len_a > 1)
	{
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
	}
	tmp = stack->b[0];
	if (stack->len_b > 1)
	{
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
	}
	if (stack->last_op[0] != '\0')
		ft_printf("%s", stack->last_op);
	ft_strcpy(stack->last_op, "ss\n");
}
