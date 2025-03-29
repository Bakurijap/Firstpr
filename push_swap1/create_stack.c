/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:22:36 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:19:20 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    append_node(t_stack_node **stack,int    n)
{
    t_stack_node    *last_node;
    t_stack_node    *new_node;
    
    if (!stack)
        return ;
    new_node = malloc(sizeof(t_stack_node));
    if (!new_node)
        return ;
    new_node->nbr = n;
    new_node->next = NULL;
    if (!(*stack)) //if stack is empty means that this is the first node of stack;
    {
        *stack = new_node;
        new_node->prev = NULL;
    }
    else 
    {
        last_node = find_last_node(*stack);
        last_node->next = new_node;
        new_node->prev = last_node;
    }
}


void    create_stack_a(t_stack_node **a,char **argv)
{
    long    n;
    int     i;

    i = 0;
    while(argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n))
            free_errors(a);
        append_node(a, (int)n);
        i++;
    }
}