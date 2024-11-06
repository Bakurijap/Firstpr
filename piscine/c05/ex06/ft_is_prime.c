/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:16:41 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/10 16:15:50 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (nb % i != 0 && i < nb)
	{
		i++;
		if (i == nb)
			return (1);
	}
	return (0);
}

/*#include <stdlib.h>
int	main (int ac,char **av)
{
	if (ac==2)
	printf("%d\n",ft_is_prime(atoi(av[1])));
}*/