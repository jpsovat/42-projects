/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:58:36 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 16:15:00 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	if (b != 0)
	{
		div = *a / *b;
		rest = *a % *b;
		*a = div;
		*b = rest;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 10;
	int	b = 2;

	printf("Antes: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois: a (divisão) = %d, b (resto) = %d\n", a, b);

	return (0);
}
*/
