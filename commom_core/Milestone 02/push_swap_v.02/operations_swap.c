/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:44:48 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 17:52:02 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

/* swap_a function: swap first two elements of stack a */
static void	swap_a(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack->a || !stack->a->next)
		return ;
	first = stack->a;
	second = stack->a->next;
	first->next = second->next;
	second->next = first;
	stack->a = second;
}

/* swap_b function: swap first two elements of stack b */
static void	swap_b(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack->b || !stack->b->next)
		return ;
	first = stack->b;
	second = stack->b->next;
	first->next = second->next;
	second->next = first;
	stack->b = second;
}

/* run swap_a function and print command */
void	sa(t_stack *stack)
{
	swap_a(stack);
	write(1, "sa\n", 3);
}

/* run swap_b function and print command */
void	sb(t_stack *stack)
{
	swap_b(stack);
	write(1, "sb\n", 3);
}

/* run swap_a and swap_b functions and print command */
void	ss(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
	write(1, "ss\n", 3);
}
