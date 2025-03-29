/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:26:34 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:22 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*int main ()
{
	char c;
	char a;
	c = 'c';
	a = 'c';
	printf("return for character:%i\n",isdigit(c));
	printf("return for mycharacter:%i",ft_isdigit(a));
	return 0;
}*/
