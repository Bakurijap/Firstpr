/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:14:09 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/11 15:36:49 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	else if (nb <= 0)
		return (0);
	else if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(--i);
	}
	return (nb);
}

/*#include <stdlib.h>
int main(int ac,char **av)
{
    if (ac)
        printf("%d\n",ft_recursive_factorial(atoi(av[1])));
}*/
