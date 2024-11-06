/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:54:00 by bjaparid          #+#    #+#             */
/*   Updated: 2024/06/30 01:24:44 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	x;

	a = 0;
	b = 1;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[b] < tab[a])
			{
				x = tab[b];
				tab[b] = tab[a];
				tab[a] = x;
			}
		b++;
		}
	a++;
	b = a + 1;
	}
}


void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
}