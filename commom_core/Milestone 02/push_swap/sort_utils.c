/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:45:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/20 13:54:34 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_node *a)
{
	int	min;

	min = a->value;
	while (a)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

void	bring_min_to_top_a(t_stack *s)
{
	int		min;
	int		i;
	int		size;
	t_node	*cur;

	min = find_min(s->a);
	i = 0;
	cur = s->a;
	while (cur && cur->value != min)
	{
		i++;
		cur = cur->next;
	}
	size = stack_size(s->a);
	if (i <= size / 2)
		while (i-- > 0)
			ra(s);
	else
		while (i++ < size)
			rra(s);
}
