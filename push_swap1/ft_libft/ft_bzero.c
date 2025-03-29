/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:22:43 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:01 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
//#include <string.h>
//#include <stdlib.h>
//#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main ()
{
	char *hello = "Hello World";
	char *str = malloc((sizeof(char) * sizeof(*hello)) + 1);
	
	strcpy(str,hello);
	printf ("string before changes :%s\n",str);
	printf ("\nstring after changes :%lu\n",ft_bzero(str,10));
	//printf ("string original change :%s\n",bzero(str,5));
	return 0;
}*/
