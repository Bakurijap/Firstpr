/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:32:59 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:50:56 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_printp(unsigned long long n, size_t *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n == 0)
		ft_putstr("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_putnbr_baseptr(n, base, count);
	}
}
