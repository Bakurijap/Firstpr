/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:04:06 by bjaparid          #+#    #+#             */
/*   Updated: 2024/06/28 13:28:11 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_numbers(int nb1, int nb2)
{
	ft_putchar(nb1 / 10 + '0');
	ft_putchar(nb1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(nb2 / 10 + '0');
	ft_putchar(nb2 % 10 + '0');
	if (nb1 != 98 || nb2 != 99)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_print_numbers(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
