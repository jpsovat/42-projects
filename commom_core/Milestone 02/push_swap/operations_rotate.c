/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:45:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 14:59:50 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ra shifts up all elements of stack a by 1. The 1st becomes the last */
static void	rotate_a(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack->a || !stack->a->next)
		return ;
	first = stack->a;
	stack->a = stack->a->next;
	first->next = NULL;
	last = stack->a;
	while (last->next)
		last = last->next;
	last->next = first;
}

/* rb shifts up all elements of stack b by 1. The 1st becomes the last */
static void	rotate_b(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack->b || !stack->b->next)
		return ;
	first = stack->b;
	stack->b = stack->b->next;
	first->next = NULL;
	last = stack->b;
	while (last->next)
		last = last->next;
	last->next = first;
}

/* run rotate_a function and print command */
void	ra(t_stack *stack)
{
	rotate_a(stack);
	write(1, "ra\n", 3);
}

/* run rotate_b function and print command */
void	rb(t_stack *stack)
{
	rotate_b(stack);
	write(1, "rb\n", 3);
}

/* run rotate_a and rotate_b functions and print command */
void	rr(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
	write(1, "rr\n", 3);
}
