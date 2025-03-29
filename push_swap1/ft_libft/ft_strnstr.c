/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:25:09 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/27 20:15:49 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
				j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*int main() {
// Test cases
    const char *haystack1 = "abcdef";
    const char *needle1 = "cd";
    size_t len1 = 5;

    const char *haystack2 = "abcdef";
    const char *needle2 = "ef";
    size_t len2 = 0;

    const char *haystack3 = "abcdef";
    const char *needle3 = "";
    size_t len3 = 4;

    const char *haystack4 = "abcdef";
    const char *needle4 = "abc";
    size_t len4 = -5;

    const char *haystack5 = "hello world";
    const char *needle5 = "world";
    size_t len5 = 11;

    const char *haystack6 = "hello world";
    const char *needle6 = "world";
    size_t len6 = 5;

    // Test each case
	printf("Test 1: %s\n",ft_strnstr(haystack1, needle1, len1));
    printf("Test 2: %s\n",ft_strnstr(haystack2, needle2, len2));
    printf("Test 3: %s\n",ft_strnstr(haystack3, needle3, len3));
    printf("Test 4: %s\n",ft_strnstr(haystack4, needle4, len4));
    printf("Test 5: %s\n",ft_strnstr(haystack5, needle5, len5));
    printf("Test 6: %s\n",ft_strnstr(haystack6, needle6, len6));

    return 0;
}*/
