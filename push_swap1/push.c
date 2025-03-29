/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:58:51 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:54:40 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push (t_stack_node **first,t_stack_node **second)
{
    t_stack_node *node_to_push;

    if (!first)
        return ;
    node_to_push = *first;
    *first = (*first)->next;
    if(*first)
        (*first)->prev = NULL;
    if(!(*second))
    {
        *second = node_to_push;
        (*second)->next = NULL;
    }
    else 
    {
        node_to_push->next = *second;
        (*second)->prev = node_to_push;
        *second = node_to_push;
    }
}


void pa(t_stack_node **a,t_stack_node **b)
{
    push(a,b);
    ft_printf("pa\n");
}
void pb(t_stack_node **a,t_stack_node **b)
{
    push(b,a);
    ft_printf("pb\n");
}

