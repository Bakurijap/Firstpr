/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:42:02 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/02 19:54:23 by bjaparid         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
// 			ft_str_is_printable("")?"OK":"Fail",
// 			ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
// 			ft_str_is_printable("ABCDEFGHIJKLmnopqrstuvwxyz")?"OK":"Fail",
// 			ft_str_is_printable("0123456789")?"OK":"Fail",
// 			ft_str_is_printable(" ")?"OK":"Fail",
// 			ft_str_is_printable("\\")?"OK":"Fail",
// 			ft_str_is_printable("\n")?"OK":"Fail");
// }