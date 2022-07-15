/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:00:20 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/07 16:11:03 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	find_min(int *tab, int len)
{
	int	i;
	int	min;

	i = 0;
	min = tab[0];
	while (i < len)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

int	find_max(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	find_next_min(int *tab, int len, int prev_min)
{
	int	next_min;
	int	i;

	i = 0;
	next_min = find_max(tab, len);
	while (i < len)
	{
		if (tab[i] < next_min && tab[i] > prev_min)
			next_min = tab[i];
		i++;
	}
	return (next_min);
}

int	find_prev_min(int *tab, int len, int next_min)
{
	int	prev_min;
	int	i;

	i = 0;
	prev_min = find_min(tab, len);
	while (i < len)
	{
		if (tab[i] > prev_min && tab[i] < next_min)
			prev_min = tab[i];
		i++;
	}
	return (prev_min);
}

int	find_prev_max(int *tab, int len, int max)
{
	int	prev_max;
	int	i;

	i = 0;
	prev_max = find_min(tab, len);
	while (i < len)
	{
		if (tab[i] > prev_max && tab[i] < max)
			prev_max = tab[i];
		i++;
	}
	return (prev_max);
}
