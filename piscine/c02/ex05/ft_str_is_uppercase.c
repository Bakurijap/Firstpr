/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:25:31 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/02 19:35:28 by bjaparid         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	retrn;

	i = 0;
	retrn = 0;
	if (ft_size(str) == 0)
	{
		retrn = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
// 			ft_str_is_uppercase("")?"OK":"Fail",
// 			ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
// 			!ft_str_is_uppercase("ABCDEFGHIJKLmnopqrstuvwxyz")?"OK":"Fail",
// 			!ft_str_is_uppercase("0123456789")?"OK":"Fail",
// 			!ft_str_is_uppercase(" ")?"OK":"Fail",
// 			!ft_str_is_uppercase("\\")?"OK":"Fail",
// 			!ft_str_is_uppercase("\n")?"OK":"Fail");
// }