/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:38:00 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 15:44:36 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
	{
		return (srclen + size);
	}
	while (src[i] && (i < size - destlen - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
/*int main() {
    char dest1[20] = "Hello";
    char src1[] = " World!";
    size_t size1 = 15;

    // Testing Your Implementation
    printf("Testing your strlcat implementation:\n");
    printf("Before strlcat: dest = '%s', src = '%s'\n", dest1, src1);
    size_t result1 = ft_strlcat(dest1, src1, size1);
    printf("After strlcat: dest = '%s'\n", dest1);
    printf("Return value: %zu\n\n", result1);

    // Resetting dest1 for next test
    char dest2[20] = "Hello";
    
    // Testing Standard Implementation
    printf("Testing standard strlcat implementation:\n");
    printf("Before strlcat: dest = '%s', src = '%s'\n", dest2, src1);
    //size_t result2 = strlcat(dest2, src1, size1);
    printf("After strlcat: dest = '%s'\n", dest2);
    printf("Return value: %zu\n", result2);

    return 0;
}*/
