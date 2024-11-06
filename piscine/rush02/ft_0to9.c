/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_0to9.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:56:25 by vpages            #+#    #+#             */
/*   Updated: 2024/07/14 15:56:45 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "10to19.c"
#include "ft_20to90.c"
#include "hundreeds.c"
#include "thousandsandetc.c"

void	tentoniteen(int nb);
void	ft_20to90(int nb);
// void thousandsandetc(long long nb,int sizeofnumber);
void	hundreeds(int nb);
void	ft_0to9(int nb)
{
	if (nb >= 0 && nb <=9)
	{
		if (nb == 0)
			putstr("zero ");
		else if (nb == 1)
			putstr ("one ");
		else if (nb == 2)
			putstr ("two ");
		else if (nb == 3)
			putstr ("three ");
		else if (nb == 4)
			putstr ("four ");
		else if (nb == 5)
			putstr ("five ");
		else if (nb == 6)
			putstr ("six ");
		else if (nb == 7)
			putstr ("seven ");
		else if (nb == 8)
			putstr ("eight ");
		else if (nb == 9)
			putstr ("nine ");
	}
	else if (nb >= 10 && nb <= 19)
	{
		tentoniteen(nb);
	}
	else if (nb >= 20 && nb <= 99)
	{
		ft_20to90(nb);
	}
	else if (nb >= 99 && nb <= 999)
	{
		hundreeds(nb);
	}
	
}
