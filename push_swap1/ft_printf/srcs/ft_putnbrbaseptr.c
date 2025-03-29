/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbaseptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:53:26 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:51:07 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"
#include <unistd.h>

void	ft_putnbr_baseptr(unsigned long long nbr, char *base, size_t *count)
{
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_baseptr(nbr / base_len, base, count);
	ft_putchar(base[nbr % base_len], count);
}
