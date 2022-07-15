/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_operation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:46:06 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/12 15:50:33 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	count_ope(int *tab, int len, int nb)
{
	int	index;

	index = 0;
	while (tab[index] != nb)
		index++;
	if (len % 2 == 0)
	{
		if (index < len / 2)
			return (index);
		if (index >= len / 2)
			return (len - index);
	}
	if (index <= len / 2)
		return (index);
	else
		return (len - index);
}

int	nb_ope_tb(t_stack *s, int nb, int index_nb)
{
	int	nb_ope;
	int	prev_min;

	nb_ope = count_ope(s->a, s->len_a, nb);
	if (s->a[index_nb] < find_min(s->b, s->len_b))
		nb_ope += count_ope(s->b, s->len_b, find_max(s->b, s->len_b));
	else
	{
		prev_min = find_prev_min(s->b, s->len_b, s->a[index_nb]);
		nb_ope += count_ope(s->b, s->len_b, prev_min);
	}
	return (nb_ope);
}
