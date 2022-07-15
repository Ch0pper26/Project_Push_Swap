/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:09:56 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 18:00:12 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack->last_op);
	free(stack);
}

void	free_group(t_group *g)
{
	free(g->group);
	free(g);
}
