/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_hundred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:26:05 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/10 10:26:33 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	tri_hundred(t_stack *stack)
{
	t_group	*g;
	int		gob;

	if (is_sort_final(stack) == 0)
		return ;
	while (stack->len_a > 5)
	{
		g = create_group(stack);
		init_group(g, stack);
		while (g->remain_int > 0)
		{
			gob = find_near_exit(stack, top(stack, g), bottom(stack, g));
			put_int_up_a(stack, gob);
			if (stack->len_b > 1)
			{
				put_goodint_up_b(stack);
			}
			pb(stack);
			g->remain_int--;
		}
		free_group(g);
	}
	tri_five(stack);
	put_back(stack);
}

void	put_back(t_stack *stack)
{
	put_int_up_b(stack, find_max(stack->b, stack->len_b));
	while (stack->len_b != 0)
		pa(stack);
	ft_printf("%s", stack->last_op);
	stack->last_op[0] = '\0';
}
