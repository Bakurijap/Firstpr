/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:03:06 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/27 22:53:42 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int ch)
{
	int				i;
	unsigned char	c;

	i = 0;
	c = (unsigned char)ch;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
/*int main(int argc,char **argv)
{
	if (argc == 3)
	{
		//char *input = argv[1];
		printf("string and find:%s,%c\n",argv[1],argv[2][0]);
		printf("if it was found :%s\n",ft_strchr(argv[1],argv[2][0]));	
		printf("original strchr function:%s\n",strchr(argv[1],argv[2][0]));
	}
}*/
/*int main() {
    // Test string with embedded null characters
    char str[10] = {'H', 'e', '\0', 'l', 'l', 'o', '\0', 'W', 'o', 'r'};
    
    printf("Testing strchr with '\\0' (passed as 1024):\n");
    char *result = strchr(str, 1024); // Equivalent to strchr(str, '\0')

    printf("original strchr result:%s\n",result);

	char str1[10] = {'H', 'e', '\0', 'l', 'l', 'o', '\0', 'W', 'o', 'r'};
	char *result1 = ft_strchr(str1,1024);
	printf("myfuntcion:%s\n",result1);
	return 0;
}*/
