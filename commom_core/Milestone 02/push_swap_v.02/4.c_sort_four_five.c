/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.c_sort_four_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:02:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/02/09 12:09:07 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bring_target_to_top_a(t_stack *stack, int target)
{
	int	pos;
	int	size;

	pos = find_pos(stack->a, target);
	size = stack_size(stack->a);
	if (pos < 0)
		return ;
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(stack);
			pos--;
		}
	}
	else
	{
		while (pos < size)
		{
			rra(stack);
			pos++;
		}
	}
}

void	sort_four_five(t_stack *stack)
{
	int	push;
	int	target;

	if (stack_size(stack->a) == 4)
		push = 1;
	else if (stack_size(stack->a) == 5)
		push = 2;
	target = 0;
	while (push > 0)
	{
		bring_target_to_top_a(stack, target);
		pb(stack);
		target++;
		push--;
	}
	sort_three(stack);
	while (stack->b)
		pa(stack);
}
