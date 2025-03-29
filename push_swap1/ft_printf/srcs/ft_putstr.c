/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:15:56 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:51:13 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../header/ft_printf.h"

void	ft_putstr(char *str, size_t *count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)", count);
		count = count + 0;
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			(*count)++;
		}
	}
}
