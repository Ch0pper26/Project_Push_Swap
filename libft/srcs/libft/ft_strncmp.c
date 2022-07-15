/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:15:27 by eblondee          #+#    #+#             */
/*   Updated: 2022/03/30 14:09:21 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ashes.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& (unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0'
		&& i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
