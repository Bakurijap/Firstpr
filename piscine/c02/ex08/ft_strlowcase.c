/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:12:55 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/02 19:51:36 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

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
// 	char c[] = "AbCdEfG-Yz";
// 	ft_putstr("AbCdEfG-Yz:");
// 	ft_putstr(ft_strlowcase(c));
// 	ft_putstr(":");
// 	ft_putstr(c);
// }