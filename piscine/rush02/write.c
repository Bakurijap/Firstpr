/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:56:21 by gpichon           #+#    #+#             */
/*   Updated: 2024/07/13 19:49:46 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	len(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1,&str[i], 1);
		i++;
	}
}

