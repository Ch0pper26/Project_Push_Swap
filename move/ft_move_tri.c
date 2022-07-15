/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_tri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:09:45 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/10 10:10:10 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	put_goodint_up_b(t_stack *stack)
{
	if (stack->a[0] < find_min(stack->b, stack->len_b))
		put_int_up_b(stack, find_max(stack->b, stack->len_b));
	else
		put_int_up_b(stack, find_prev_min(stack->b, stack->len_b, stack->a[0]));
}
