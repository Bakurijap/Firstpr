/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:33:02 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:50:54 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"
#include <stdio.h>

void	ft_placeholder(va_list list, char *s, size_t *count, size_t i)
{	
	char	*base2;
	char	*base1;

	base1 = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (s[i] == 'c')
		ft_putchar(va_arg(list, int), count);
	else if (s[i] == 'i' || s[i] == 'd')
		ft_putnbr(va_arg(list, int), count);
	else if (s[i] == 'u')
		ft_putnbru(va_arg(list, int), count);
	else if (s[i] == 's')
		ft_putstr(va_arg(list, char *), count);
	else if (s[i] == 'x')
		ft_putnbr_base(va_arg(list, int), base1, count);
	else if (s[i] == 'X')
		ft_putnbr_base(va_arg(list, int), base2, count);
	else if (s[i] == 'p')
		ft_printp(va_arg(list, long), count);
	else if (s[i] == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (-1);
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_placeholder(list, (char *)s, &count, i);
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(list);
	return (count);
}
