/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:16:41 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/30 15:17:12 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	idx;
	int	base_len;

	if (!ft_base_is_valid(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = get_sign(&str);
	base_len = 0;
	while (base[base_len])
		base_len++;
	result = 0;
	idx = index_in_base(*str, base);
	while (idx != -1)
	{
		result = result * base_len + idx;
		str++;
		idx = index_in_base(*str, base);
	}
	return (sign * result);
}
/*
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("Resultado 1: %d\n", ft_atoi_base("1010", "01"));
	printf("Resultado 2: %d\n", ft_atoi_base("1A", "0123456789ABCDEF"));
	printf("Result 3: %d\n", ft_atoi_base("  --+--+1234ab567", "0123456789"));
	printf("Resultado 4: %d\n", ft_atoi_base("z", "abc"));
	printf("Resultado 5: %d\n", ft_atoi_base("  -ff", "0123456789abcdef"));
}
*/
