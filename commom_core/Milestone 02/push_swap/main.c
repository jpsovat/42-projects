/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:24:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 15:03:05 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* =========================== INITIALIZING ================================= */

/*  create new node  */
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

/*  include tokens into node  */
static void	append_node(t_node **head, t_node *new)
{
	t_node	*cur;

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

/*  count nodes in a stack  */
int	stack_size(t_node *node)
{
	int	count;

	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

/*  free tokens for next reading  */
static void	free_tokens(char **tokens)
{
	int	i;

	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

/* =============================== RUN =================================== */

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		size;
	int		i;
	char	**tokens;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (0);
	/* transform to valid input (string array) */
	tokens = parse_args(argc, argv);
	if (!tokens)
		return (0);
	/* build stack A from tokens, trasnforming to integers */
	i = 0;
	while (tokens[i])
	{
		append_node(&stack.a, new_node(ft_atoi(tokens[i])));
		i++;
	}
	free_tokens(tokens);
	size = stack_size(stack.a);
/* caso 0 ou 1 elemento */
	if (size <= 1)
		return (0);
/* caso 2 elementos */
	if (size == 2)
	{
		if (stack.a->value > stack.a->next->value)
			sa(&stack);
		return (0);
	}
/* caso 3 elementos */
	if (size == 3)
	{
		sort_three(&stack);
		return (0);
	}
	return (0);
}
