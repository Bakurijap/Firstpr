/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:10:16 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/17 17:34:19 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	k;
	int	*array;
	int	numberrange;

	k = 0;
	numberrange = max - min ;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		array = malloc(sizeof(int) * numberrange);
		if (array == NULL)
			return (-1);
	}
	while (min < max)
	{
		array[k] = min;
		min++;
		k++;
	}
	*range = array;
	return (numberrange);
}

/*int main(int argc,char **argv)
{
    int i;
    int *range;
	int len;
    i = 0;
    if (argc == 3)
	{
		len = ft_ultimate_range(&range,atoi(argv[1]),atoi(argv[2]));
        printf("%d\n",len);
	}
}*/
