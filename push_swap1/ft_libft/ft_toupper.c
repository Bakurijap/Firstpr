/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:37:37 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:40:43 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*int main (int argc,char **argv)
{
	if (argc == 2)
	{
		char input = argv[1][0];
		printf("your given character:%c\n",input);
		printf("result after change:%c\n",ft_toupper(input));
		printf("result after original toupper function:%c\n",toupper(input));
	}
}*/
