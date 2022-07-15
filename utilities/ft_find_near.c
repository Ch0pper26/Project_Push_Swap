/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_near.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:43:50 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/17 10:45:14 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	find_near_exit(t_stack *s, int top, int bottom)
{
	int	index_top;
	int	index_bottom;

	index_top = 0;
	index_bottom = s->len_a - 1;
	if (top == bottom)
		return (top);
	while (s->a[index_top] != top)
		index_top++;
	while (s->a[index_bottom] != bottom)
		index_bottom--;
	if (s->len_b > 2)
	{
		if (nb_ope_tb(s, bottom, index_bottom) < nb_ope_tb(s, top, index_top))
			return (bottom);
		else
			return (top);
	}
	if (s->len_a - index_bottom < index_top)
		return (bottom);
	else
		return (top);
}

int	find_near_exit_500(t_stack *stack, int top, int bottom)
{
	int	index_top;
	int	index_bottom;

	index_top = 0;
	index_bottom = stack->len_a - 1;
	if (top == bottom)
		return (top);
	while (stack->a[index_top] != top)
		index_top++;
	while (stack->a[index_bottom] != bottom)
		index_bottom--;
	if (stack->len_a - index_bottom < index_top)
		return (bottom);
	else
		return (top);
}
