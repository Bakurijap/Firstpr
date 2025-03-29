/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:35:10 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:19 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int main ()
{
	unsigned char c;
	unsigned char a;
	c = 200;
	a = 200;
	printf("return for character:%i\n",isascii(c));
	printf("return for mycharacter:%i",ft_isascii(a));
	return 0;
}*/
