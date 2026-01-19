/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:35:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 16:58:14 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==========================    BIB. INCLUDES    =========================== */

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

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

/* init helpers */
int		stack_size(t_node *node);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**parse_args(int argc, char **argv);
int		is_valid_int_str(const char *s);
int		ft_atol_safe(const char *s, long *out);
int		has_value(t_node *head, int value);
void	free_stack(t_node *head);



/* operations */
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

/* sort */
void	sort_three(t_stack *stack);

#endif