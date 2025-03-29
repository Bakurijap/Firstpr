/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:06:12 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:55:00 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack_node **stack)
{
    if (!*stack || !(*stack)->next)
        return ;
    *stack = (*stack)->next;
    (*stack)->prev->prev = *stack;
    (*stack)->prev->next = (*stack)->next;
    if ((*stack)->next)
        (*stack)->next->prev = (*stack)->prev;
    (*stack)->next=(*stack)->prev;
    (*stack)->prev=NULL;
}

void sa(t_stack_node **a)
{
    swap(a);
    ft_printf("sa\n");
}

void sb(t_stack_node **b)
{
    swap(b);
    ft_printf("sb\n");
}

void ss(t_stack_node **a,t_stack_node **b)
{
    swap(a);
    swap(b);
    ft_printf("ss\n");
}

