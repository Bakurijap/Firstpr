/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:49:41 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/27 19:53:24 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	int	i;

	i = ft_strlen((char *)s);
	if (!s)
		return (0);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)ch)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*int main(int argc,char **argv)
{
	if (argc == 3)
	{
		//char *input = argv[1];
		printf("string and find:%s,%c\n",argv[1],argv[2][0]);
		printf("if it was found :%s\n",ft_strrchr(argv[1],argv[2][0]));	
		printf("original strchr :%s\n",strrchr(argv[1],argv[2][0]));
		printf("my function when ch '\\0':%s!\n",ft_strrchr(argv[1],'\0'));
		printf("original strchr :%s!\n",strrchr(argv[1],'\0'));
	}
}*/
