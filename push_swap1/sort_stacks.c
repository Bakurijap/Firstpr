/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:00:59 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:11:33 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_stacks(t_stack_node **a,t_stack_node **b)
{
    int stacklen;
    t_stack_node *smallest_node;
    bool    ra_or_rra;

    stacklen = stack_len(*a);
    while(stacklen-- > 3)
    {
        pb(a,b);
    }
    sort_three(a);
    while(*b)
    {
        set_target_for_b_from_a(*a,*b);
        move_b_to_a(b,a);
    }
    current_index(*a);
    smallest_node = find_min(*a);
    ra_or_rra = smallest_node->above_median;
    while(*a != smallest_node)
        ra_or_rra ? ra(a) : rra(a);
}