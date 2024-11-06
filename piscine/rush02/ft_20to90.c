/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_20to90.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:27:40 by vpages            #+#    #+#             */
/*   Updated: 2024/07/14 15:23:31 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	hundreeds(int nb);
void	ft_0to9(int nb);
void	tentoniteen(int nb);
void	ft_20to90(int nb)
{
	if (nb == 20)
		putstr ("twenty ");
	else if (nb == 30)
		putstr ("thirty ");
	else if (nb == 40)
		putstr ("forty ");
	else if (nb == 50)
		putstr ("fifty ");
	else if (nb == 60)
		putstr ("sixty ");
	else if (nb == 70)
		putstr ("seventy ");
	else if (nb == 80)
		putstr ("eighty ");
	else if (nb == 90)
		putstr ("ninety ");
	else if (nb > 99)
	{
		hundreeds(nb);
	}
	else
	{
		ft_0to9(nb - nb % 10);
		ft_0to9(nb % 10);
	}
	
}
