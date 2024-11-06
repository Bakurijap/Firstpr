/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:28:54 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/11 15:36:52 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (--i >= 1)
		{
			nb = nb * i;
		}
		return (nb);
	}
	else
		return (0);
}

/*int main ()
{
	printf("%d\n",ft_iterative_factorial(0));	
}*/
