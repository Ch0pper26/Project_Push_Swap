/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:35:50 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 16:42:53 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	is_sort_final(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len_b != 0)
		return (1);
	while (i < stack->len_a - 1)
	{
		if (stack->a[i] > stack->a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	is_sort(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}
