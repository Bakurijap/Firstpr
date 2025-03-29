/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:32:23 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 16:26:54 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
/*int main ()
{
	char c;
	char a;
	c = '/';
	a = '/';
	printf("return for character:%i\n",isalnum(c));
	printf("return for mycharacter:%i",ft_isalnum(a));
	return 0;
}*/
