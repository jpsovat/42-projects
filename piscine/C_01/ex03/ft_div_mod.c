/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:02:21 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 15:55:25 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	resultado_div;
	int	resultado_mod;

	ft_div_mod(a, b, &resultado_div, &resultado_mod);

	printf("Divisão: %d\n", resultado_div);
	printf("Resto: %d\n", resultado_mod);

	return (0);
}
*/
