/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:58:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 17:44:04 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_push_swap(t_stack *stack)
{
	if (stack->len_a == 2)
	{
		sa(stack);
		ft_printf("%s", stack->last_op);
	}
	else if (stack->len_a == 3)
		tri_three(stack);
	else if (stack->len_a == 4)
		tri_four(stack);
	else if (stack->len_a == 5)
		tri_five(stack);
	else if (stack->len_a < 101)
		tri_hundred(stack);
	else if (stack->len_a < 501)
		tri_five_hundred(stack);
}
