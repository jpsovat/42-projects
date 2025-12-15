/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:44:48 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/15 18:55:37 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa function: swap first two elements of stack a */
void	sa(t_stack *stack)
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
	write(1, "sa\n", 3);
}

/* sb function: swap first two elements of stack b */
void	sb(t_stack *stack)
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
	write(1, "sb\n", 3);
}
