/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.0_run_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:28:05 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/29 18:12:53 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "0.0_push_swap.h"

void	run_sort(t_stack *stack)
{
	int	size;

	size = stack_size(stack->a);
	if (size <= 1)
		return ;
	else if (size == 2)
		sort_two(stack);
	else if (size == 3)
		sort_three(stack);
	else if (size <= 5)
		sort_five(stack);
/*	else
		sort_big(stack);
*/
}
