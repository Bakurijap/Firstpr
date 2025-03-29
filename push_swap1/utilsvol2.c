/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsvol2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:03:24 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 20:21:15 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void current_index(t_stack_node *stack)
{
    int i;
    int median;

    i = 0;
    if (!stack)
        return ;
    median = stack_len(stack) / 2;
    while(stack)
    {
        stack->index = i;
        if(i <= median)
            stack->above_median = true;
        else
            stack->above_median = false;
        i++;
        stack = stack->next;
    }
}