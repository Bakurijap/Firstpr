/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:50:12 by bjaparid          #+#    #+#             */
/*   Updated: 2024/06/28 23:19:02 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	c;
	int	d;
	int	k;
	int	l;

	k = *a ;
	l = *b ;
	c = *a / *b;
	*a = c;
	d = k % *b;
	*b = d;
}
