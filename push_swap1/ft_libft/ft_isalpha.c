/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:53:07 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:15 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*int main ()
{
	char c;
	char a;
	c = ' ';
	a = ' ';
	printf("return for character:%i\n",isalpha(c));
	printf("return for mycharacter:%i",ft_isalpha(a));
	return 0;
}*/
