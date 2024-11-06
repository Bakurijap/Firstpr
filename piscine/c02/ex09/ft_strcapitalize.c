/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:22:47 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/02 22:51:47 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	checkaplha(char str)
{
	if ((str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z')
		|| (str >= '0' && str <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (i == 0 || !checkaplha(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// void	ft_putstr(char *str)
// {
// 	int	l;

// 	l = 0;
// 	while (str[l])
// 	{
// 		l++;
// 	}
// 	write(1, str, l);
// }

// int		main()
// {
// 	char str[] = "salut, coMMent tu vAs ? 
//42mOts quArAnTe-dEux; cinQuante+et+un";
//     ft_putstr("salut, coMMent tu vAs ? 
//42mOts quArAnTe-dEux; cinQuante+et+un:\n");
// 	ft_putstr(ft_strcapitalize(str));
// 	// ft_putstr(":");
// 	// ft_putstr(str);
// }