/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_and_movea_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:53:11 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/26 19:21:30 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// void set_target_for_a_from_b(t_stack_node *a,t_stack_node *b)
// {
//     t_stack_node *current_b;
//     t_stack_node *target_node;
//     long best_match;

//     while(b)
//     {
//         best_match = LONG_MIN;
//         current_b = b;
//         while(b)
//         {
//             if(current_b->nbr > a->nbr && current_b->nbr < best_match)
//             {
//                 best_match = current_b->nbr;
//                 target_node = current_b;
//             }
//             b = b->next;
//         }
//         if (best_match == LONG_MAX)
//             a->target_node = find_min(b);
//         else 
//             a->target_node = target_node;
//         a = a->next;
//     }
// }

// void prep_b_nodes(t_stack_node *a,t_stack_node *b)
// {
//     current_index(a);
//     current_index(b);
//     set_target_for_b_from_a(a,b);
// }