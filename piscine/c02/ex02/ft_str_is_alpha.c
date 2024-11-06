/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:08:47 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/01 17:14:55 by bjaparid         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
// 	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
// 			ft_str_is_alpha("")?"OK":"Fail",
// 			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRa")?"OK":"Fail",
// 			!ft_str_is_alpha("1")?"OK":"Fail",
// 			!ft_str_is_alpha(" ")?"OK":"Fail",
// 			!ft_str_is_alpha("\\")?"OK":"Fail",
// 			!ft_str_is_alpha("\n")?"OK":"Fail");
// }