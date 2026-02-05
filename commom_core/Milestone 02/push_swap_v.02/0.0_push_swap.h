/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.0_push_swap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:35:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/02/05 15:42:38 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==========================    BIB. INCLUDES    =========================== */

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* ==============================    STRUCT    ============================== */

/*  create struct for nodes [value | node *next]  */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
} t_node;

/*  create struct for stacks, pointing to the first node position [node *]  */
typedef struct s_stack
{
	struct s_node	*a;
	struct s_node	*b;
}	t_stack;

/* ===========================   HELPER FUNCTIONS   ========================= */

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_free_arguments(char **arguments);

/* ================================   INPUT   =============================== */

char	**parse_args(int argc, char **argv);
int		is_valid_num(const char *s);
int		convert_str_to_int(char	*str, int *number);
int		has_value(t_node *head, int value);

/* ==============================    STACK    =============================== */

int		init_stack_a(t_stack *stack, int argc, char **argv);
t_node	*new_node(int value);
void	append_node(t_node **head, t_node *new);
void	ft_free_stack(t_node **head);
int		is_sorted(t_node *stack_a);
int		assign_index(t_node *node);
int		stack_size(t_node *node);

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

/* ===============================   SORTING   ============================== */

void	run_sort(t_stack *stack);
void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four_five(t_stack *stack);



#endif