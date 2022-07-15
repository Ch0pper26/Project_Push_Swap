/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_construct_struct_stack_hundred.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:24:04 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/17 10:47:01 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_stack	*create_stack(int argc, char **argv)
{
	char	**str;
	t_stack	*stack;

	stack = NULL;
	if (argc == 2)
	{
		str = ft_split(argv[0], ' ');
		stack = init_stack(len_split(str), str, stack);
		free_split(str);
	}
	else
	{
		stack = init_stack(argc, argv, stack);
	}
	return (stack);
}

t_stack	*init_stack(int len, char **arg, t_stack *stack)
{
	int	i;

	i = 0;
	stack = malloc(sizeof(t_stack));
	stack->len_a = len - 1;
	stack->len_b = 0;
	stack->a = malloc((len) * sizeof(int));
	if (!stack->a)
		return (NULL);
	stack->b = malloc((len) * sizeof(int));
	if (!stack->b)
		return (NULL);
	while (i < len - 1)
	{
		stack->a[i] = ft_atoi(arg[i]);
		i++;
	}
	stack->last_op = malloc(5 * sizeof(char));
	if (!stack->last_op)
		return (NULL);
	stack->last_op[0] = '\0';
	return (stack);
}

t_group	*create_group(t_stack *stack)
{
	t_group	*g;

	g = malloc(sizeof(t_group));
	if (!g)
		return (NULL);
	if (stack->len_a < 15)
		g->len_group = stack->len_a - 5;
	else if (stack->len_a < 101)
		g->len_group = (stack->len_a - 5) / 3;
	else
		g->len_group = stack->len_a / 7;
	g->remain_int = g->len_group;
	g->group = malloc(sizeof(int) * g->len_group);
	if (!g->group)
		return (NULL);
	return (g);
}

void	init_group(t_group *g, t_stack *stack)
{
	int	prev_min;
	int	i;

	i = 1;
	prev_min = find_min(stack->a, stack->len_a);
	g->group[0] = prev_min;
	while (i < g->len_group)
	{
		prev_min = find_next_min(stack->a, stack->len_a, prev_min);
		g->group[i] = prev_min;
		i++;
	}
}
