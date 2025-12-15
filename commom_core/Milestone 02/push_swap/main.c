/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/15 18:55:34 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

/* ============================ RUN AND PRINT ============================== */

/*  print stack while we have value, move to next node  */
void	print_stack(t_node *node)
{
	while (node)
	{
		printf("%d ", node->value);
		node = node->next;
	}
	printf("\n");
}

/*  running and checking  */
int	main(void)
{
	t_stack	stack;

	/* create stack A: 1 -> 2 -> 3 */
	stack.a = new_node(1);
	stack.a->next = new_node(2);
	stack.a->next->next = new_node(3);

	/* stack B starts empty */
	stack.b = NULL;

	/* print initial stacks */
	printf("\nEstado inicial:\n");
	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* test sa */
	printf("\n---------------------------\n");
	printf("Comando: sa\n");
	sa(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* test pb */
	printf("\n---------------------------\n");
	printf("Comando: pb\n");
	pb(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* test pb */
	printf("\n---------------------------\n");
	printf("Comando: pb\n");
	pb(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* test sb */
	printf("\n---------------------------\n");
	printf("Comando: sb\n");
	sb(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* test pa */
	printf("\n---------------------------\n");
	printf("Comando: pa\n");
	pa(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

		printf("\n---------------------------\n");
	printf("Comando: pa\n");
	pa(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	return (0);
}
