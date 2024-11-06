/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:44:23 by bjaparid          #+#    #+#             */
/*   Updated: 2024/06/28 13:12:19 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char nb1, char nb2, char nb3)
{
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	write(1, &nb3, 1);
	if (nb1 != '7' || nb2 != '8' || nb3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	while (nb1 <= '9' )
	{
		nb2 = nb1 + 1;
		while (nb2 <= '9' )
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_putchar(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
