/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:11:46 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:39:32 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((str1[i] - str2[i]));
		i++;
	}
	return (0);
}
/*int main()
{
    // Test case 1: Identical strings
    const char *str1 = "hello";
    const char *str2 = "hello";
    printf("Test 1: Identical strings\n");
    printf("Custom memcmp: %d\n", ft_memcmp(str1, str2, 5));
    printf("Standard memcmp: %d\n", memcmp(str1, str2, 5));
    printf("\n");

    // Test case 2: Different strings
    const char *str3 = "hello";
    const char *str4 = "world";
    printf("Test 2: Different strings\n");
    printf("Custom memcmp: %d\n", ft_memcmp(str3, str4, 5));
    printf("Standard memcmp: %d\n", memcmp(str3, str4, 5));
    printf("\n");

    // Test case 3: Different lengths
    const char *str5 = "hello";
    const char *str6 = "hello world";
    printf("Test 3: Different lengths\n");
    printf("Custom memcmp: %d\n", ft_memcmp(str5, str6, 5));
    printf("Standard memcmp: %d\n", memcmp(str5, str6, 5));
    printf("\n");

    // Test case 4: Comparing part of a string
    const char *str7 = "abcdef";
    const char *str8 = "abcxyz";
    printf("Test 4: Comparing part of a string\n");
    printf("Custom memcmp: %d\n", ft_memcmp(str7, str8, 3));
    printf("Standard memcmp: %d\n", memcmp(str7, str8, 3));
    printf("\n");

    // Test case 5: Null case (empty strings)
    const char *str9 = "";
    const char *str10 = "";
    printf("Test 5: Empty strings\n");
    printf("Custom memcmp: %d\n", ft_memcmp(str9, str10, 0));
    printf("Standard memcmp: %d\n", memcmp(str9, str10, 0));
    printf("\n");

    return 0;
}*/
