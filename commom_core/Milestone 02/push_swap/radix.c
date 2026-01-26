/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:34:05 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/26 10:59:41 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(int max_index)
{
	int	bits;

	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack *stack)
{
	int	size;
	int	max_bits;
	int	bit;
	int	i;

	size = stack_size(stack->a);
	max_bits = get_max_bits(size - 1);
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size && stack->a)
		{
			if (((stack->a->index >> bit) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			i++;
		}
		i++;
		while (stack->b)
			pa(stack);
		bit++;
	}
}
