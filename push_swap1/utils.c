/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:56:50 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/25 15:57:16 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node  *find_last_node(t_stack_node *list)
{
    if (!list)
        return (NULL);
    while(list->next)
        list = list->next;
    return (list);
}

int stack_is_sorted(t_stack_node *stack)
{
    if (!stack)
        return (1);
    while (stack->next)
    {
        if (stack->nbr > stack->next->nbr)
            return (0);
        stack = stack->next;
    }
    return (1);
}

int stack_len(t_stack_node *stack)
{
    int count;

    count = 0;
    if (!stack)
        return (0);
    while(stack->next)
    {
        count++;
        stack = stack->next;
    }
    return (++count);
}

t_stack_node *find_max(t_stack_node *stack)
{
    t_stack_node *highestval;

    if (!stack)
        return (NULL);
    highestval = stack;    
    stack = stack->next;
    while (stack)
    {
        if(stack->nbr > highestval->nbr)
           highestval = stack; 
        stack=stack->next;
    }
    return (highestval);
}

t_stack_node *find_min(t_stack_node *stack)
{
    t_stack_node *lowestval;
    
    if (!stack)
        return (NULL);
    lowestval=stack;
    stack = stack->next;
    while (stack)
    {
        if(stack->nbr < lowestval->nbr)
           lowestval = stack; 
        stack=stack->next;
    }
    return (lowestval);
}