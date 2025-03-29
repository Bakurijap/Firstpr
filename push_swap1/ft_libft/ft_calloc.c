/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:17:37 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/29 02:34:53 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*mem;
	size_t	totalsize;

	i = 0;
	totalsize = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (mem = malloc(sizeof(char)));
	mem = malloc(totalsize);
	if (!mem)
		return (0);
	while (i < totalsize)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
/*int main() {
    // Test 1: Allocate memory for 5 integers
    size_t nmemb = 0;
    size_t size = 10;

    // Using ft_calloc
    int *arr1 = (int *)ft_calloc(nmemb, size);
    if (arr1 == NULL) {
        printf("ft_calloc failed\n");
    } else {
        printf("ft_calloc result:\n");
        for (size_t i = 0; i < nmemb; i++) {
            printf("arr1[%zu] = %d\n", i, arr1[i]);  // Should be 0
        }
        free(arr1);
    }

    // Using original calloc (system's malloc and calloc)
    int *arr2 = (int *)calloc(nmemb, size);
    if (arr2 == NULL) {
        printf("original_calloc failed\n");
    } else {
        printf("original calloc result:\n");
        for (size_t i = 0; i < nmemb; i++) {
            printf("arr2[%zu] = %d\n", i, arr2[i]);  // Should be 0
        }
        free(arr2);
    }

    return 0;
}*/
