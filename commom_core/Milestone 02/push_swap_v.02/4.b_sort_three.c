/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.b_sort_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:55:29 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 17:58:15 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a->value;
	b = stack->a->next->value;
	c = stack->a->next->next->value;
	if (a < b && b < c)
		return ;
	else if (a > b && a < c)
		sa(stack);
	else if (a < b && a > c)
		rra(stack);
	else if (a > b && b < c && a > c)
		ra(stack);
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(stack);
	}
	else if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
}
