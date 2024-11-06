/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:41:32 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/08 17:19:28 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/* int main ()
{
 	char s1[] = "\0";
 	char s2[] = "\0";
 	char s3[] = "hell mate";
 	char s4[] = "hello mate";
 	char s5[] = "hello mate";
 	char s6[] = "hell mate";
 	char s7[] = "Y";
 	char s8[] = "";
 	printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s1,s2,
 	ft_strncmp(s1,s2,0),strncmp(s1,s2,0));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s3,s4,
 	ft_strncmp(s3,s4,10),strncmp(s3,s4,10));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s5,s6,
 	ft_strncmp(s5,s6,6),strncmp(s5,s6,6));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s5,s6,
 	ft_strncmp(s7,s8,6),strncmp(s7,s8,6));
 }*/
