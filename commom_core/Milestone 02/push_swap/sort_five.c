/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:38:24 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/20 13:54:26 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *s)
{
	int	size;
	int	push_count;

	size = stack_size(s->a);
	push_count = 0;
	if (size == 5)
		push_count = 2;
	else if (size == 4)
		push_count = 1;
	while (push_count > 0)
	{
		bring_min_to_top_a(s);
		pb(s);
		push_count--;
	}
	sort_three(s);
	while (s->b)
		pa(s);
	if (s->a && s->a->next && s->a->value > s->a->next->value)
		sa(s);
}
