/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:38:39 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/07 16:11:17 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	minus_count;

	minus_count = 0;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	if (minus_count % 2 != 0)
		number = number * -1;
	return (number);
}
/*
int main ()
{
	char c[] = "  ----++--1000123as456789";
	int k = ft_atoi(c);
	printf("String: '%s' => Integer: %d\n", c,k);
}*/
