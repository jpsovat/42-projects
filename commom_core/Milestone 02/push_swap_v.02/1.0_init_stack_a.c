/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.0_init_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:01:35 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 11:41:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

/*  place the numbers given into the stack                            */
/*  step 01_parse_args: make valid different inputs from user         */
/*  step 02_check input data: only numbers apllying to project rules  */
/*  step 03_create node and append into the stack A                   */

int	init_stack_a(t_stack *stack, int argc, char **argv)
{
	char	**args_array;
	int		i;
	int		val;
	t_node	*node;

	args_array = parse_args(argc, argv);
	if (!args_array)
		return (0);
	i = 0;
	while (args_array[i])
	{
		if (!is_valid_num(args_array[i]))
			return (ft_free_arguments(args_array), ft_free_stack(&stack->a), 0);
		if (!convert_str_to_int(args_array[i], &val))
			return (ft_free_arguments(args_array), ft_free_stack(&stack->a), 0);
		if (has_value(stack->a, val))
			return (ft_free_arguments(args_array), ft_free_stack(&stack->a), 0);
		node = new_node(val);
		if (!node)
			return (ft_free_arguments(args_array), ft_free_stack(&stack->a), 0);
		append_node(&stack->a, node);
		i++;
	}
	ft_free_arguments(args_array);
	return (1);
}
