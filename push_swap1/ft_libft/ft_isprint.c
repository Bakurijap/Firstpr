/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:43:55 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:25 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c > 31 && c < 127))
		return (1);
	else
		return (0);
}
/*int main ()
{
	char c;
	char a;
	c = 31;
	a = 31;
	printf("return for character:%i\n",isprint(c));
	printf("return for mycharacter:%i",ft_isprint(a));
	return 0;
}*/
