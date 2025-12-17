/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:27:43 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/17 11:32:06 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rra: shifts down all elements of stack A by 1. The last becomes the 1st */
static void	reverse_rotate_a(t_stack *stack)
{
	t_node	*prev;
	t_node	*last;
	if (!stack->a || !stack->a->next)
		return;
	prev = NULL;
	last = stack->a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->a;
	stack->a = last;
}

/* rrb: shifts down all elements of stack B by 1. The last becomes the 1st */
static void	reverse_rotate_b(t_stack *stack)
{
	t_node	*prev;
	t_node	*last;
	if (!stack->b || !stack->b->next)
		return;
	prev = NULL;
	last = stack->b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->b;
	stack->b = last;
}

/* run reverse_rotate_a and print command */
void	rra(t_stack *stack)
{
	reverse_rotate_a(stack);
	write(1, "rra\n", 4);
}

/* run reverse_rotate_b and print command */
void	rrb(t_stack *stack)
{
	reverse_rotate_b(stack);
	write(1, "rrb\n", 4);
}

/* run reverse_rotate_a and reverse_rotate_b and print command */
void	rrr(t_stack *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
	write(1, "rrr\n", 4);
}
