/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/17 11:32:04 by jsovat-d         ###   ########.fr       */
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

	/* create stack B: 4 -> 5 */
	stack.b = new_node(4);
	stack.b->next = new_node(5);

	/* print initial stacks */
	printf("\nEstado inicial:\n");
	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* rra */
	printf("\n---------------------------\n");
	printf("Comando: rra\n");
	rra(&stack);

	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* rrb */
	printf("\n---------------------------\n");
	printf("Comando: rrb\n");
	rrb(&stack);
	
	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);

	/* rrr */
	printf("\n---------------------------\n");
	printf("Comando: rrr\n");
	rrr(&stack);
	
	printf("A: ");
	print_stack(stack.a);
	printf("B: ");
	print_stack(stack.b);
	return (0);
}
