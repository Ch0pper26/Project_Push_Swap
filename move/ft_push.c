/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:20:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 15:34:52 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	pa(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[0];
	if (stack->len_b == 0)
		return ;
	if (stack->len_a == 0)
	{
		stack->a[0] = tmp;
	}
	else
	{
		down_tab(stack->a, stack->len_a);
		stack->a[0] = tmp;
	}
	up_tab(stack->b, stack->len_b);
	stack->len_b -= 1;
	stack->len_a += 1;
	if (stack->last_op[0] != '\0')
		ft_printf("%s", stack->last_op);
	ft_strcpy(stack->last_op, "pa\n");
}

void	pb(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	if (stack->len_a == 0)
		return ;
	if (stack->len_b == 0)
	{
		stack->b[0] = tmp;
	}
	else
	{
		down_tab(stack->b, stack->len_b);
		stack->b[0] = tmp;
	}
	up_tab(stack->a, stack->len_a);
	stack->len_a -= 1;
	stack->len_b += 1;
	if (stack->last_op[0] != '\0')
		ft_printf("%s", stack->last_op);
	ft_strcpy(stack->last_op, "pb\n");
}
