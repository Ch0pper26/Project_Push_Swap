/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_five_hunded.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:49:32 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/16 10:49:34 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	tri_five_hundred(t_stack *stack)
{
	t_group	*g;
	int		gob;

	while (stack->len_a > 100)
	{
		g = create_group(stack);
		init_group(g, stack);
		while (g->remain_int != 0)
		{
			gob = find_near_exit_500(stack, top(stack, g), bottom(stack, g));
			put_int_up_a(stack, gob);
			if (stack->len_b > 1)
				put_goodint_up_b(stack);
			pb(stack);
			g->remain_int--;
		}
		free_group(g);
	}
	tri_hundred(stack);
}
