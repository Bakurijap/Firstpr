/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:29:21 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:44:17 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	length;
	size_t	custom;
	char	*strjoin;

	length = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	strjoin = malloc(sizeof(char) * (length + 1));
	if (!strjoin)
		return (0);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	custom = i;
	i = 0;
	while (s2[i])
	{
		strjoin[custom + i] = s2[i];
		i++;
	}
	strjoin[custom + i] = '\0';
	return (strjoin);
}
/*int main() {
    // Test cases for ft_strjoin
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    const char *str3 = "abc";
    const char *str4 = "12345";
    const char *str5 = "";
    const char *str6 = "Hello, ";
    const char *str7 = "There!";

    // Test 1: Standard strings
    char *result1 = ft_strjoin(str1, str2);
    printf("Test 1: %s\n", result1);
    free(result1);

    // Test 2: Join two non-empty strings
    char *result2 = ft_strjoin(str3, str4);
    printf("Test 2: %s\n", result2);
    free(result2);

    // Test 3: Join an empty string with a non-empty string
    char *result3 = ft_strjoin(str5, str2);
    printf("Test 3: %s\n", result3);
    free(result3);

    // Test 4: Join two empty strings
    char *result4 = ft_strjoin(str5, str5);
    printf("Test 4: %s\n", result4);
    free(result4);

    // Test 5: Join a string with itself
    char *result5 = ft_strjoin(str6, str6);
    printf("Test 5: %s\n", result5);
    free(result5);

    // Test 6: Another combination of two strings
    char *result6 = ft_strjoin(str6, str7);
    printf("Test 6: %s\n", result6);
    free(result6);

    return 0;
}*/
