/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:29:31 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:55:03 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack_node **stack)
{
    t_stack_node *last_node;
    
    if(!stack || !(*stack)->next)
        return ;
    last_node = find_last_node(*stack);
    last_node->next = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    last_node->next->prev = last_node;
    last_node->next->next = NULL;
}

void ra(t_stack_node **a)
{
    rotate(a);
    ft_printf("ra\n");
}

void rb(t_stack_node **b)
{
    rotate(b);
    ft_printf("rb\n");
}

void rr(t_stack_node **a,t_stack_node **b)
{
    rotate(a);
    rotate(b);
    ft_printf("rr\n");
}


