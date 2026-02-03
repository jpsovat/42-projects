/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:01:35 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 11:21:00 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack_a(t_stack *stack, int argc, char **argv)
{
	char	**tokens;
	int		i;
	long	val;
	t_node	*node;

	tokens = parse_args(argc, argv);
	if (!tokens)
		return (0);
	i = 0;
	while (tokens[i])
	{
		if (!is_valid_int_str(tokens[i]))
			return (free_tokens(tokens), free_stack(&stack->a), 0);
		if (!ft_atol_safe(tokens[i], &val))
			return (free_tokens(tokens), free_stack(&stack->a), 0);
		if (has_value(stack->a, (int)val))
			return (free_tokens(tokens), free_stack(&stack->a), 0);
		node = new_node((int)val);
		if (!node)
			return (free_tokens(tokens), free_stack(&stack->a), 0);
		append_node(&stack->a, node);
		i++;
	}
	free_tokens(tokens);
	return (1);
}
