/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:23:38 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 17:53:20 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*int main ()
{
	char c = '5';
	char *hello = "Hello World";
	char *str = malloc((sizeof(char) * sizeof(*hello)) + 1);
	
	strcpy(str,hello);
	printf ("string before changes :%s\n",str);
	printf ("string after changes :%s\n",(char *)ft_memset(str,c,20));
	printf ("string original change :%s\n",(char *)memset(str,c,20));
	return 0;
}*/
