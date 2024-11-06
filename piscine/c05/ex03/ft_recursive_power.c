/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:49:26 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/09 20:59:48 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, --power);
	}
	return (nb);
}

/*#include <stdlib.h>
int main (int argc,char **argv)
{
	if (argc == 3)
	printf("%d\n",ft_recursive_power(atoi(argv[1]),atoi(argv[2])));
}*/
