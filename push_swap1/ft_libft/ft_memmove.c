/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:27:35 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/27 23:20:28 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (dest);
	if (src == dest)
		return (dest);
	if (src > dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
/*int main() {
    char src[] = "Hello, world!";
    char dest[20];

    // Copy the string from src to dest
    ft_memmove(dest, src, strlen(src) + 1);

    printf("Source:%s\n", src);
    printf("Destination:%s\n", dest);

    return 0;
}*/
/*int main() {
    char str[] = "Hello, world!";
    
    //move the substring "world" to the beginning of the string
    ft_memmove(str, str + 7, 5); // Copy "world" to the beginning

    printf("Result:%s\n", str);

    return 0;
}*/
/*int main() {
    char str[] = "Hello, world!";
    
    //move the substring "Hello" to the end of the string
    memmove(str + 7, str, 5); // Copy "world" to the beginning

    printf("Result:%s\n", str);

    return 0;
}*/
