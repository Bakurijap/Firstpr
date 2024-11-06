/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:26 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/08 22:16:04 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = nb;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int		main(void)
{
	ft_putnbr(4);
	printf("\n");
	ft_putnbr(-4);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(214748);
	printf("\n");
}*/