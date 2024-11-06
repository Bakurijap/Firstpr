/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:03:31 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/01 18:13:42 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// char	*ft_strupcase(char *src);

// void	ft_putstr(char *str)
// {
// 	int l;

// 	l = 0;
// 	while (str[l])
// 	{
// 		l++;
// 	}
// 	write(1, str, l);
// }

// int		main()
// {
// 	char str[] = "abcdefs-yz";
// 	ft_putstr("abcdefs-yz:");
// 	ft_putstr(ft_strupcase(str));
// 	ft_putstr(":");
// 	ft_putstr(str);
// }