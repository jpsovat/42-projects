/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:35:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/16 14:45:01 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==========================    BIB. INCLUDES    =========================== */

# include <unistd.h>
# include <stdlib.h>

/* ==============================    STRUCT    ============================== */

/*  create struct for nodes [valeu | node *next]  */
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

/*  create struct for stacks, pointing to the first node position [node *]  */
typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
}	t_stack;

/* ==============================    STACK    =============================== */

/* stack init */
t_node	*new_node(int value);

/* operations */
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

/* sort */
void	sort_three(t_stack *stack);

#endif