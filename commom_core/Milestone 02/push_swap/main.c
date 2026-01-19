/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 21:38:58 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* =============================== RUN =================================== */

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		size;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (0);
	if (!init_stack_a(&stack, argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	size = stack_size(stack.a);
	if (size == 2 && stack.a->value > stack.a->next->value)
		sa(&stack);
	else if (size == 3)
		sort_three(&stack);
	free_stack(&stack.a);
	free_stack(&stack.b);
	return (0);
}
