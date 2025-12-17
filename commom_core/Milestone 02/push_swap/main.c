/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/17 12:53:49 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* =========================== INITIALIZING ================================= */

/*  create new node  */
t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

/*  count nodes in a stack  */
int	stack_size(t_node *node)
{
	int	count;

	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

/* =============================== RUN =================================== */

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		size;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (0);
	/* criar stack A a partir dos argumentos (simples por enquanto) */
	stack.a = new_node(ft_atoi(argv[1]));
	if (argc > 2)
		stack.a->next = new_node(ft_atoi(argv[2]));
	if (argc > 3)
		stack.a->next->next = new_node(ft_atoi(argv[3]));
	size = stack_size(stack.a);
	/* caso 0 ou 1 elemento */
	if (size <= 1)
		return (0);
	/* caso 2 elementos */
	if (size == 2)
	{
		if (stack.a->value > stack.a->next->value)
			sa(&stack);
		return (0);
	}
	/* caso 3 elementos */
	if (size == 3)
	{
		sort_three(&stack);
		return (0);
	}
	return (0);
}
