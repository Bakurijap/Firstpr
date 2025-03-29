/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:53:58 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:51:10 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"
#include <stdio.h>

void	ft_putnbru(unsigned int nb, size_t *count)
{
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar(nb % 10 + '0', count);
}
