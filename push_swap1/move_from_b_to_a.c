/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_from_b _to_a .c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:59:44 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:53:52 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_both(t_stack_node **a,t_stack_node **b,t_stack_node *cheapest_node)
{
    while(*a != cheapest_node->target_node)
        ra(a);
    while(*b != cheapest_node)
        rb(b);
    current_index(*a);
    current_index(*b);
}

void reverse_rotate_both(t_stack_node **a,t_stack_node **b,t_stack_node *cheapest_node)
{
    while(*a != cheapest_node->target_node)
        rra(a);
    while(*b != cheapest_node)
        rrb(b);
    current_index(*a);
    current_index(*b);
}

t_stack_node *find_cheapest(t_stack_node *stack)
{
    if(!stack)
        return (NULL);
    while(stack)
    {
        if(stack->cheapest)
            return (stack);
        stack=stack->next;
    }
    return (NULL);
}

void rotate_untilontop(t_stack_node **stack,t_stack_node *node_on_top,char which_stack)
{
    while(*stack != node_on_top)
    {
        if(which_stack == 'b')
        {
            if(node_on_top->above_median)
                rb(stack);
            else 
                rrb(stack);
        }
        else if (which_stack == 'a')
        {
            if(node_on_top->above_median)
                ra(stack);
            else 
                rra(stack);
        }
    }
}
void move_b_to_a(t_stack_node **a,t_stack_node **b)
{
    t_stack_node *cheapest_node;

    cheapest_node = find_cheapest(*b);
    if (cheapest_node->above_median && cheapest_node->target_node->above_median)
        rotate_both(a,b,cheapest_node);
    if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median))
        reverse_rotate_both(a,b,cheapest_node);
    rotate_untilontop(b,cheapest_node,'b');
    rotate_untilontop(a,cheapest_node->target_node,'a');
    pa(a,b);
}
