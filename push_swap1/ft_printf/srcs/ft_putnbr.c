/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:59:27 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:51:04 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"
#include <stdio.h>

void	ft_putnbr(int nb, size_t *count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) = (*count) + 11;
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar(nb % 10 + '0', count);
}
