/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.0_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:07:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 18:12:55 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

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
			ft_free_stack(&stack.a);
			ft_free_stack(&stack.b);
			return (1);
		}
		run_sort(&stack);
	}
	ft_free_stack(&stack.a);
	ft_free_stack(&stack.b);
	return (0);
}
