/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/22 17:58:07 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	run_sort(t_stack *stack)
{
	int	size;

	size = stack_size(stack->a);
	if (size == 2)
	{
		if (stack->a->value > stack->a->next->value)
			sa(stack);
	}
	else if (size == 3)
		sort_three(stack);
	else if (size <= 5)
		sort_five(stack);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (0);
	if (!init_stack_a(&stack, argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (!is_sorted(stack.a))
	{
		if (!assign_index(stack.a))
		{
			free_stack(&stack.a);
			free_stack(&stack.b);
			return (1);
		}
		run_sort(&stack);
	}
	free_stack(&stack.a);
	free_stack(&stack.b);
	return (0);
}
