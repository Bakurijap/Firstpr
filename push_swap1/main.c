/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:52:26 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:55:25 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node *a;
    t_stack_node *b;

    a = NULL;
    b = NULL;
    if (argc == 1 || ( argc == 2 && argv[1][0] == '\0'))
        return (1);
    else if (argc == 2) 
        argv = split(argv[1], ' ');
    create_stack_a(&a,argv + 1);
    if (!stack_is_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else 
            sort_stacks(&a, &b);
    }
    free_stack(&a);
    return (0);
}