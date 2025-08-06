/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:34:12 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 14:00:38 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main()
{
	int	x = 1;
	int	y = 2;

	int	*a = &x;
	int	*b = &y;

	printf("antes: a = %d e b = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois: a = %d e b = %d\n", *a, *b);

	return (0);
}
*/
