/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:23:22 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/31 19:06:21 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	div;

	if (nb < 2)
		return (0);
	i = 1;
	div = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			div++;
		i++;
	}
	if (div == 2)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	int	p1 = 2;
	int     p2 = 3;
	int     p3 = 5;
	int     p4 = 7;
	int     p5 = 11;
	int     p6 = 13;
	int	p7 = 4;
	int	p8 = 24;

	printf ("%d\n", ft_is_prime(p1));
	printf ("%d\n", ft_is_prime(p2));
	printf ("%d\n", ft_is_prime(p3));
	printf ("%d\n", ft_is_prime(p4));
	printf ("%d\n", ft_is_prime(p5));
	printf ("%d\n", ft_is_prime(p6));
	printf ("%d\n", ft_is_prime(p7));
	printf ("%d\n", ft_is_prime(p8));
}
*/
