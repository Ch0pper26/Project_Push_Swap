/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:21:02 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 17:31:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	up_tab(int *tab, int nb_nbr)
{
	int	i;

	i = 0;
	while (i < nb_nbr - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
}

void	down_tab(int *tab, int nb_nbr)
{
	int	i;

	i = nb_nbr;
	while (i != 0)
	{
		tab[i] = tab[i - 1];
		i--;
	}
}

void	put_up(t_stack *stack, int min, char c)
{
	if (c == 'a')
		put_int_up_a(stack, min);
	else if (c == 'b')
		put_int_up_b(stack, min);
}

void	put_int_up_a(t_stack *stack, int nb)
{
	int	index;

	index = 0;
	while (stack->a[index] != nb)
		index++;
	if (stack->len_a % 2 == 0)
	{
		if (index < stack->len_a / 2)
			while (stack->a[0] != nb)
				ra(stack);
		if (index >= stack->len_a / 2)
			while (stack->a[0] != nb)
				rra(stack);
	}
	else
	{
		if (index <= stack->len_a / 2)
			while (stack->a[0] != nb)
				ra(stack);
		if (index > stack->len_a / 2)
			while (stack->a[0] != nb)
				rra(stack);
	}
}

void	put_int_up_b(t_stack *stack, int nb)
{
	int	index;

	index = 0;
	while (stack->b[index] != nb)
		index++;
	if (stack->len_b % 2 == 0)
	{
		if (index < stack->len_b / 2)
			while (stack->b[0] != nb)
				rb(stack);
		if (index >= stack->len_b / 2)
			while (stack->b[0] != nb)
				rrb(stack);
	}
	else
	{
		if (index <= stack->len_b / 2)
			while (stack->b[0] != nb)
				rb(stack);
		if (index > stack->len_b / 2)
			while (stack->b[0] != nb)
				rrb(stack);
	}
}
