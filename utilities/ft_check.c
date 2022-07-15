/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:57:12 by eblondee          #+#    #+#             */
/*   Updated: 2022/05/04 14:27:52 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	check(char **argv, int argc)
{
	char	**str;

	if (argc == 2)
	{
		str = ft_split(argv[0], ' ');
		if (ft_check(str, len_split(str)) == 1)
		{
			free_split(str);
			return (1);
		}
		free_split(str);
		return (0);
	}
	else
	{
		if (ft_check(argv, argc) == 1)
			return (1);
	}
	return (0);
}

int	ft_check(char **stack, int argc)
{
	int	i;

	i = 0;
	if (stack[i] == NULL)
	{
		print_error("");
		return (1);
	}
	while (i < argc - 1)
	{
		if (stack[i][0] == '\0')
		{
			print_error("");
			return (1);
		}
		if (ft_check_number(stack[i]) == 1)
			return (1);
		if (ft_check_int(stack[i]) == 1)
			return (1);
		i++;
	}
	if (ft_check_duplicates(stack, argc) == 1)
		return (1);
	return (0);
}

int	ft_check_number(char *stack)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (stack[i])
	{
		if (stack[i] == '-')
		{
			if ((ft_isdigit(stack[i + 1]) == 0))
			{
				print_error("");
				return (1);
			}
			count++;
		}
		if ((ft_isdigit(stack[i]) == 0 && stack[i] != '-') || count > 1)
		{
			print_error("");
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_int(char *stack)
{
	long long	nb;

	nb = ft_atoll(stack);
	if (nb < -2147483648 || nb > 2147483647)
	{
		print_error("");
		return (1);
	}
	return (0);
}

int	ft_check_duplicates(char **stack, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc - 2)
	{
		while (j < argc - 1)
		{
			if (!((stack[i][0] == '-') ^ (stack[j][0] == '-')))
			{
				if (strcmp(stack[i], stack[j]) == 0)
				{
					print_error("");
					return (1);
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
