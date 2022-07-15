/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:52:03 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 17:03:51 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	len_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		i++;
	}
	return (i + 1);
}

int	find_nb(int *tab, int len, int nb)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	top(t_stack *stack, t_group *g)
{
	int	i;

	i = 0;
	while (find_nb(g->group, g->len_group, stack->a[i]) == 0)
		i++;
	return (stack->a[i]);
}

int	bottom(t_stack *stack, t_group *g)
{
	int	i;

	i = stack->len_a - 1;
	while (find_nb(g->group, g->len_group, stack->a[i]) == 0)
		i--;
	return (stack->a[i]);
}
