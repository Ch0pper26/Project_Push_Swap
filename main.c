/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:35:36 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/10 10:58:21 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc <= 1)
	{
		return (0);
	}
	argv++;
	if (check(argv, argc) == 1)
	{
		return (0);
	}
	stack = create_stack(argc, argv);
	if (is_sort_final(stack) == 0)
	{
		free_stack(stack);
		return (0);
	}
	ft_push_swap(stack);
	free_stack(stack);
	return (0);
}
