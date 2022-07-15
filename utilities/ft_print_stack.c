/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:59:41 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/06 15:37:35 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_print_stack(t_stack *stack, char *c)
{
	if (c[0] == 'a' && c[1] == '\0')
	{
		ft_print_stack_a(stack);
	}
	else if (c[0] == 'b' && c[1] == '\0')
	{
		ft_print_stack_b(stack);
	}
	else
	{
		ft_print_stack_b(stack);
		ft_printf("\n");
		ft_print_stack_a(stack);
	}
}

void	ft_print_stack_a(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len_a != 0)
	{
		while (i < stack->len_a)
		{
			ft_printf("%d\n", stack->a[i]);
			i++;
		}
		ft_printf("a\n\n");
	}
}

void	ft_print_stack_b(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len_b != 0)
	{
		while (i < stack->len_b)
		{
			ft_printf("%d\n", stack->b[i]);
			i++;
		}
		ft_printf("b\n\n");
	}
}
