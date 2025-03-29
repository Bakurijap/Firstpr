/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:35:35 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:49:11 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "ft_libft/libft.h"
# include "ft_printf/header/ft_printf.h"

typedef struct s_stack_node 
{
	int						nbr;
	int						index;
	int						push_cost;
	bool					above_median;
	bool					cheapest;
	struct	s_stack_node	*target_node;
	struct	s_stack_node	*next;
	struct	s_stack_node	*prev;
}	t_stack_node;

/*Create stack functions*/
void    create_stack_a(t_stack_node **a,char **argv);
void    append_node(t_stack_node **stack,int    n);

/*Error handling functions*/
int     error_syntax(char *str);
int     error_duplicate(t_stack_node *a,int n);
void    free_stack(t_stack_node **stack);
void    free_errors(t_stack_node **a);


/*Move stack b to stack a functions*/
void move_b_to_a(t_stack_node **a,t_stack_node **b);
void rotate_untilontop(t_stack_node **stack,t_stack_node *node_on_top,char which_stack);
t_stack_node *find_cheapest(t_stack_node *stack);
void reverse_rotate_both(t_stack_node **a,t_stack_node **b,t_stack_node *cheapest_node);
void rotate_both(t_stack_node **a,t_stack_node **b,t_stack_node *cheapest_node);


/*set target for b from stack a functions*/
void prep_b_nodes(t_stack_node *a,t_stack_node *b);
void set_target_for_b_from_a(t_stack_node *a,t_stack_node *b);
void set_price(t_stack_node *a,t_stack_node *b);
void set_cheapest(t_stack_node *b);


/*Stack sorting functions*/
void sort_three(t_stack_node **a);
void    sort_stacks(t_stack_node **a,t_stack_node **b);

/*Util functions*/
t_stack_node  *find_last_node(t_stack_node *list);
int stack_is_sorted(t_stack_node *stack);
t_stack_node *find_max(t_stack_node *stack);
t_stack_node *find_min(t_stack_node *stack);
int stack_len(t_stack_node *stack);
void current_index(t_stack_node *stack);

/*Push,swap,rotate,rev_rotate command functions*/
void swap(t_stack_node **stack);
void ss(t_stack_node **a,t_stack_node **b);
void sb(t_stack_node **b);
void sa(t_stack_node **a);
void rotate(t_stack_node **stack);
void rr(t_stack_node **a,t_stack_node **b);
void rb(t_stack_node **b);
void ra(t_stack_node **a);
void rev_rotate(t_stack_node **stack);
void rrr(t_stack_node **a,t_stack_node **b);
void rrb(t_stack_node **b);
void rra(t_stack_node **a);
void push (t_stack_node **first,t_stack_node **second);
void pb(t_stack_node **a,t_stack_node **b);
void pa(t_stack_node **a,t_stack_node **b);

/*functions from libft*/
// long	ft_atol(const char *str);
// char	**ft_split(char const *s, char c);
char	**split(char const *s, char c);
#endif