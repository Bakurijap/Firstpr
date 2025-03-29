/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_and_moveb_to_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:53:11 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/25 18:18:55 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_cheapest(t_stack_node *b)
{
    long best_match;
    t_stack_node *best_match_node;

    if (b == NULL)
        return ;
    best_match = LONG_MAX;
    while(b)
    {
        if (b->push_cost < best_match)
        {
            best_match_node = b;
            best_match = b->push_cost;
        }
        b = b->next;
    }
    best_match_node->cheapest = true;
}

void set_price(t_stack_node *a,t_stack_node *b)
{
    int len_a;
    int len_b;

    len_a = stack_len(a);
    len_b = stack_len(b);

    while(b)
    {
        b->push_cost = b->index;
        if(!(b->above_median))
            b->push_cost = len_b - (b->index); 
        if(b->target_node->above_median)
            b->push_cost = b->push_cost + b->target_node->index;
        else 
            b->push_cost = b->push_cost + (len_a - (b->target_node->index));
        b=b->next;
    }
}
void set_target_for_b_from_a(t_stack_node *a,t_stack_node *b)
{
    t_stack_node *current_a;
    t_stack_node *target_node;
    long best_match;

    while(b)
    {
        best_match = LONG_MAX;
        current_a = a;
        while(a)
        {
            if(current_a->nbr > b->nbr && current_a->nbr < best_match)
            {
                best_match = current_a->nbr;
                target_node = current_a;
            }
            a = a->next;
        }
        if (best_match == LONG_MAX)
            b->target_node = find_min(a);
        else 
            b->target_node = target_node;
        b = b->next;
    }
}

void prep_b_nodes(t_stack_node *a,t_stack_node *b)
{
    current_index(a);
    current_index(b);
    set_target_for_b_from_a(a,b);
    set_price(a,b);
    set_cheapest(b);
}