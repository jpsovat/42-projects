/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 00:00:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/26 13:21:53 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_chunk_size(int size)
{
	if (size <= 100)
		return (20);
	return (40);
}

static void	push_chunks_to_b(t_stack *stack, int size, int chunk)
{
	int	limit;
	int	pushed;

	limit = chunk;
	pushed = 0;
	while (pushed < size && stack->a)
	{
		if (stack->a->index < limit)
		{
			pb(stack);
			pushed++;
			if (stack->b && stack->b->index < limit - (chunk / 2))
				rb(stack);
			if (pushed == limit)
				limit += chunk;
		}
		else
			ra(stack);
	}
}

static void	push_back_top2(t_stack *stack, int size)
{
	int	target;

	target = size - 1;
	while (stack->b)
	{
		bring_index_to_top_b(stack, target);
		pa(stack);
		target--;
		if (stack->b && stack->b->index == target)
		{
			pa(stack);
			target--;
		}
	}
}

void	sort_big(t_stack *stack)
{
	int	size;
	int	chunk;

	size = stack_size(stack->a);
	chunk = get_chunk_size(size);
	push_chunks_to_b(stack, size, chunk);
	push_back_top2(stack, size);
}
