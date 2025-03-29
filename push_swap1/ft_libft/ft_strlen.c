/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:48:07 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:58:49 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <time.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int main ()
{
	char *c = "";
	char *a = "";
	printf("return for character length:%lu\n",strlen(c));
	printf("return for mycharacter lenght:%lu",ft_strlen(a));
	return 0;
}*/
