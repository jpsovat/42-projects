/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:17:16 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/26 13:27:55 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos_index(t_node *b, int target)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->index == target)
			return (pos);
		pos++;
		b = b->next;
	}
	return (-1);
}

void	bring_index_to_top_b(t_stack *stack, int target)
{
	int	pos;
	int	size;

	pos = find_pos_index(stack->b, target);
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
