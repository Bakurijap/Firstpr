/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:53:26 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 14:02:56 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"
#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t  i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(unsigned int nbr, char *base, size_t *count)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base, count);
	ft_putchar(base[nbr % base_len], count);
}
