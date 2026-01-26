/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:39:21 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/26 10:54:02 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*  pb function: send 1st element of stack a to stack b pos1  */
void	pb(t_stack *stack)
{
	t_node	*tmp;

	if (!stack->a)
		return ;
	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = stack->b;
	stack->b = tmp;
	write(1, "pb\n", 3);
}

/*  pa function: send 1st element of stack b to stack a pos1  */
void	pa(t_stack *stack)
{
	t_node	*tmp;

	if (!stack->b)
		return ;
	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = stack->a;
	stack->a = tmp;
	write(1, "pa\n", 3);
}
