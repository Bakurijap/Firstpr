/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:08:10 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/09 20:46:17 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * number;
		power--;
	}
	return (nb);
}
// #include <stdlib.h>
// int main (int argc,char **argv)
// {
// 	if (argc == 3)
// 	printf("%d\n",ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
// }
