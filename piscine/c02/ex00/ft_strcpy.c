/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:12:22 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/01 14:39:48 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main()
// {
// 	char dest[] = "Epic fail";
// 	char src[] = "Success";
// 	printf("%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
// 	// char dest1[] = "";
// 	// char src1[] = "";
// 	// ft_strcpy(dest1, src1);
// }