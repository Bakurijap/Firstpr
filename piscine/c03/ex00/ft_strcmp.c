/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:14:00 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/03 14:04:04 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	retrn;

	retrn = 0;
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char	s1[] = "hello";
// 	char	s2[] = "hello";
// 	char	s3[] = "hel";
// 	char	s4[] = "helmo";
// 	char	s5[] = "hello";
// 	char	s6[] = "hel";
// 	printf("%s\n%s\nmineoutput:%d\nfunctionoutput:%d\n",
//s1,s2,ft_strcmp(s1,s2),strcmp(s1,s2));
// 	printf("%s\n%s\nmineoutput:%d\nfunctionoutput:%d\n",
//s3,s4,ft_strcmp(s3,s4),strcmp(s3,s4));
// 	printf("%s\n%s\nmineoutput:%d\nfunctionoutput:%d\n",
///s5,s6,ft_strcmp(s5,s6),strcmp(s5,s6));
// }
