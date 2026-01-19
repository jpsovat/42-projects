/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_safe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:06:28 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 16:14:33 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol_safe(const char *s, long *out)
{
	int		i;
	long	sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	if (!s || !out)
		return (0);
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
	{
		res = res * 10 + (s[i] - '0');
		if (sign == 1 && res > 2147483647L)
			return (0);
		if (sign == -1 && -res < -2147483648L)
			return (0);
		i++;
	}
	*out = res * sign;
	return (1);
}
