/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:39:12 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:31 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_intlen(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = (long)n;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		length;
	long	nb;
	char	*intarr;
	int		oneifnegativen;

	nb = (long)n;
	oneifnegativen = (nb < 0);
	length = ft_intlen(nb);
	intarr = malloc(sizeof(char) * (length + oneifnegativen + 1));
	if (!intarr)
		return (0);
	if (nb < 0)
	{
		intarr[0] = '-';
		nb = -nb;
	}
	intarr[length + oneifnegativen] = '\0';
	while (length > 0)
	{
		intarr[--length + oneifnegativen] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (intarr);
}
/*int main() {
    // Test cases
    int test_cases[] = {0, 1, -1, 123, -123, 2147483647, -2147483648};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("Comparing ft_itoa with itoa:\n");
    for (int i = 0; i < num_tests; i++) {
        int n = test_cases[i];
        
        // Test your ft_itoa
        char *ft_result = ft_itoa(n);
        
        // Test standard itoa (via sprintf as a replacement for 
        char std_result[12];
        sprintf(std_result, "%d", n);

        // Print results
        printf("Input: %d\n", n);
        printf("ft_itoa: %s\n", ft_result);
        printf("itoa   : %s\n", std_result);
        printf("Match  : %s\n\n", strcmp(ft_result, std_result) 
		== 0 ? "YES" : "NO");

        // Free allocated memory
        free(ft_result);
    }

    return 0;
}*/