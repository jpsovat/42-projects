/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.b_check_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:06:33 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 11:41:58 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

int	is_valid_num(const char *s)
{
	int	i;

	if (!s || s[0] == '\0')
		return (0);
	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	convert_str_to_int(char	*str, int *number)
{
	int		sign;
	int		i;
	long	val;

	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	val = 0;
	while (str[i])
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	val *= sign;
	if (val < INT_MIN || val > INT_MAX)
		return (0);
	*number = (int)val;
	return (1);
}

int	has_value(t_node *head, int value)
{
	while (head)
	{
		if (head->value == value)
			return (1);
		head = head->next;
	}
	return (0);
}
