/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_safe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:06:28 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 21:38:57 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parse_sign(const char *s, long *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

static int	will_overflow(long res, int digit, long sign)
{
	if (sign == 1)
		return (res > 2147483647L / 10
			|| (res == 2147483647L / 10 && digit > 7));
	return (res > 2147483648L / 10
		|| (res == 2147483648L / 10 && digit > 8));
}

int	ft_atol_safe(const char *s, long *out)
{
	int		i;
	long	sign;
	long	res;
	int		digit;

	if (!s || !out)
		return (0);
	i = parse_sign(s, &sign);
	res = 0;
	while (s[i])
	{
		digit = s[i] - '0';
		if (will_overflow(res, digit, sign))
			return (0);
		res = res * 10 + digit;
		i++;
	}
	*out = res * sign;
	return (1);
}
