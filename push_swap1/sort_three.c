/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:04:11 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/24 23:50:47 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(t_stack_node **a)
{
    t_stack_node *highest_node;

    highest_node = find_max(*a);
    if (*a == highest_node)
        ra(a);
    else if ((*a)->next == highest_node)
        rra(a);
    if ((*a)->nbr > (*a)->next->nbr)
        sa(a);
}