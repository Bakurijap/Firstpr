/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:16:00 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/29 00:55:36 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sublen;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	sublen = ft_strlen(s) - start;
	if (sublen > len)
		sublen = len;
	substr = malloc(sizeof(char) * (sublen + 1));
	if (!substr)
		return (NULL);
	while (i < sublen)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*int main()
{
    // Test cases
    const char *str1 = "Hello, World!";

    // Test 1: Extract substring from the start of the string
    char *sub1 = ft_substr(str1, 0, 5);  // Expected: "Hello"
    printf("Test 1: %s\n", sub1);
    free(sub1);

    // Test 2: Extract substring from the middle of the string
    char *sub2 = ft_substr(str1, 7, 5);  // Expected: "World"
    printf("Test 2: %s\n", sub2);
    free(sub2);

    // Test 3: Extract substring where start is beyond string length
    char *sub3 = ft_substr(str1, 15, 5);  // Expected: ""
    printf("Test 3: '%s'\n", sub3);  // Empty output
    free(sub3);

    // Test 4: Extract substring with length greater than available chars
    char *sub4 = ft_substr(str1, 7, 50);  // Expected: "World!"
    printf("Test 4: %s\n", sub4);
    free(sub4);

    // Test 5: Extract entire string as substring
    char *sub5 = ft_substr(str1, 0, 100);  // Expected: "Hello, World!"
    printf("Test 5: %s\n", sub5);
    free(sub5);

    return 0;
}*/
