/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:35:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/20 13:57:26 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==========================    BIB. INCLUDES    =========================== */

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/* ==============================    STRUCT    ============================== */

/*  create struct for nodes [value | node *next]  */
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
void	append_node(t_node **head, t_node *new);
int		init_stack_a(t_stack *stack, int argc, char **argv);

/* stack utils */
int		stack_size(t_node *node);
void	free_stack(t_node **head);
int		has_value(t_node *head, int value);
int		is_sorted(t_node *a);

/* ==============================   PARSING   =============================== */

char	**parse_args(int argc, char **argv);
void	free_tokens(char **tokens);
int		is_valid_int_str(const char *s);
int		ft_atol_safe(const char *s, long *out);

/* libft-like utils */
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* ============================== OPERATIONS =============================== */

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

/* ===============================   SORT   ================================= */

void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack);

/* ============================   SORT UTILS  =============================== */

int		find_min(t_node *a);
void	bring_min_to_top_a(t_stack *s);

#endif
