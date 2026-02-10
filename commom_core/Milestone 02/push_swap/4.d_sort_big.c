/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.d_sort_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:46:31 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/02/09 12:09:16 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max_index(t_node *node)
{
	int	max;

	if (!node)
		return (-1);
	max = node->index;
	while (node)
	{
		if (node->index > max)
			max = node->index;
		node = node->next;
	}
	return (max);
}

/* bring the max index of B to the top using the fewest rb/rrb */

static void	bring_max_to_top_b(t_stack *stack)
{
	int	max;
	int	pos;
	int	size;

	if (!stack->b)
		return ;
	max = find_max_index(stack->b);
	pos = find_pos(stack->b, max);
	size = stack_size(stack->b);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			rb(stack);
	}
	else
	{
		while (pos++ < size)
			rrb(stack);
	}
}

static void	push_chunks_to_b(t_stack *stack, int size)
{
	int	chunk;
	int	limit;

	chunk = get_chunk_size(size);
	limit = chunk;
	while (stack->a)
	{
		if (stack->a->index < limit)
		{
			pb(stack);
			if (stack->b && stack->b->index < limit - (chunk / 2))
				rb(stack);
		}
		else
			ra(stack);
		if (stack_size(stack->b) == limit && limit < size)
		{
			limit += chunk;
			if (limit > size)
				limit = size;
		}
	}
}

static void	push_back_to_a(t_stack *stack)
{
	while (stack->b)
	{
		bring_max_to_top_b(stack);
		pa(stack);
	}
}

void	sort_big(t_stack *stack)
{
	int	size;

	size = stack_size(stack->a);
	push_chunks_to_b(stack, size);
	push_back_to_a(stack);
}
