/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:55:05 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/15 18:05:06 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	k;
	int	nuumberrange;
	int	*range;

	k = 0;
	nuumberrange = max - min;
	if (nuumberrange > 0)
	range = malloc(sizeof(int) * nuumberrange);
	else
		return (0);
	if (!range)
		return (0);
	while (min < max)
	{
		range[k] = min;
		k++;
		min++;
	}
	return (range);
}
/*
int main()
{
    int i;
    int *range;
    i = 0;
    // if (argc == 3)
    range = ft_range(2147483600,2147483647);
    // while (i < )
    //     printf("%d\n",ft_range(atoi(argv[1]),atoi(argv[2])));
}*/