/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:21:30 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/01 21:47:22 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_size(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		k++;
	}
	return (k);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	retrn;

	retrn = 0;
	i = 0;
	if (ft_size(str) == 0)
	{
		retrn = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			retrn = 1;
		}
		else
			return (0);
		i++;
	}
	return (retrn);
}
// int		main()
// {
// 	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
// 			ft_str_is_lowercase("")?"OK":"Fail",
// 			ft_str_is_lowercase("abcdefghijklmnstuvwxyz")?"OK":"Fail",
// 			!ft_str_is_lowercase("ABCDEFGHIJKpqrstuvwxyz")?"OK":"Fail",
// 			!ft_str_is_lowercase("0123456789")?"OK":"Fail",
// 			!ft_str_is_lowercase(" ")?"OK":"Fail",
// 			!ft_str_is_lowercase("\\")?"OK":"Fail",
// 			!ft_str_is_lowercase("\n")?"OK":"Fail");
// }