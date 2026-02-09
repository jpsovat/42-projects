/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:26:06 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/02/09 12:10:01 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* create new node */

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

/* append node at the end of the list */

void	append_node(t_node **head, t_node *new)
{
	t_node	*cur;

	if (!head || !new)
		return ;
	if (!*head)
	{
		*head = new;
		return ;
	}
	cur = *head;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}

/* count number of nodes in a stack */

int	stack_size(t_node *node)
{
	int	stack_size;

	stack_size = 0;
	while (node)
	{
		stack_size++;
		node = node->next;
	}
	return (stack_size);
}

int	get_chunk_size(int size)
{
	if (size <= 100)
		return (20);
	return (60);
}

int	find_pos(t_node *node, int target)
{
	int	pos;

	pos = 0;
	while (node)
	{
		if (node->index == target)
			return (pos);
		pos++;
		node = node->next;
	}
	return (-1);
}
