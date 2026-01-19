/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:19:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 16:19:07 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_value(t_node *head, int value)
{
	while (head)
	{
		if (head->value == value)
			return (1);
		head = head->next;
	}
	return (0);
}
