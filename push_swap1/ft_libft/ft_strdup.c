/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:51:47 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 17:56:43 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcopy;

	i = 0;
	strcopy = malloc(sizeof(char) * (ft_strlen(src)) + 1);
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

/*char *ft_
 * strdup(char *src);

int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail")
			"OK" :
			"Fail");
}*/
