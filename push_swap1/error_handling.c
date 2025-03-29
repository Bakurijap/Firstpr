/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:41:57 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/24 19:57:41 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int error_syntax(char *str)
{
    int i;

    i = 0;
    if (!str[i])
        return (1);
    if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
        return (1);
    if ((str[i] == '+' || str[i] == '-') && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
        return (1);
    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (1);
        i++;
    }
    return 0;
}
int error_duplicate(t_stack_node *a,int n)
{
    if(!a)
        return (1);
    while (a)
    {
            if (n == a->nbr)
                return (1);
            a = a->next;
    }
    return (0);
}
void free_stack(t_stack_node **stack)
{
    t_stack_node    *tmp;
    t_stack_node    *current;

    if (!stack)
        return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->nbr = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}
void free_errors(t_stack_node **a)
{
    free_stack(a);
    ft_printf("Error\n");
    exit (1);
}
