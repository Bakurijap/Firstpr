/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:29:31 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:55:02 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rev_rotate(t_stack_node **stack)
{
    t_stack_node *last_node;
    
    if(!stack || !(*stack)->next)
        return ;
    last_node = find_last_node(*stack);
    last_node->prev->next = NULL;
    last_node->next = *stack;
    last_node->prev = NULL;
    *stack = last_node;
    (*stack)->next->prev = last_node;
}

void rra(t_stack_node **a)
{
    rev_rotate(a);
    ft_printf("rra\n");
}

void rrb(t_stack_node **b)
{
    rev_rotate(b);
    ft_printf("rrb\n");
}

void rrr(t_stack_node **a,t_stack_node **b)
{
    rev_rotate(a);
    rev_rotate(b);
    ft_printf("rrr\n");
}

