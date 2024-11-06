/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:55:27 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/17 12:23:42 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (src[size])
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcopy;

	i = 0;
	strcopy = malloc(sizeof(char) * (ft_strlen(src)) + 1);
	*strcopy = '\0';
	if (strcopy == 0)
		return (0);
	while (src[i])
	{
		strcopy[i] = src[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}

// char *ft_strdup(char *src);
// int main (int argc,char **argv)
// {
//     if (argc == 2)
//         printf("%s\n",ft_strdup(argv[1]));
//     return 0;
// }