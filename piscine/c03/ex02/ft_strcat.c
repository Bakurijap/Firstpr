/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:50:51 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/02 18:09:13 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main ()
{
	char s1[] = "hello, ";
        char s2[] = "Bakuri";
        char s3[] = "hello, ";
	char s4[] = "Bashia";
//	printf("%s\n%s\n",strcat(s1,s2),strcat(s3,s4));
	printf("%s\n%s\n",ft_strcat(s1,s2),ft_strcat(s3,s4));

}*/
