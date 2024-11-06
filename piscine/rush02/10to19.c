/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10to19.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:06:07 by gpichon           #+#    #+#             */
/*   Updated: 2024/07/14 14:34:28 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	tentoniteen(int nb)
{
	if (nb == 10)
		putstr ("ten ");
	if (nb == 11)
		putstr ("eleven ");
	if (nb == 12)
		putstr ("twelve ");
	if (nb == 13)
		putstr ("thirteen ");
	if (nb == 14)
		putstr("fourteen ");
	if (nb == 15)
		putstr ("fifteen ");
	if (nb == 16)
		putstr ("sixteen ");
	if (nb == 17)
		putstr ("seveneen");
	if (nb == 18)
		putstr ("eighteen");
	if (nb == 19)
		putstr ("nineteen");
}
