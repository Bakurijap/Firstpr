/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:17:08 by bjaparid          #+#    #+#             */
/*   Updated: 2024/11/26 16:38:08 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
 	char s1[] = "\0";
 	char s2[] = "\0";
 	char s3[] = "test\200";
 	char s4[] = "test\0";
 	char s5[] = "hello mate";
 	char s6[] = "hell mate";
 	char s7[] = "Y";
 	char s8[] = "";
 	printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s1,s2,
 	ft_strncmp(s1,s2,0),strncmp(s1,s2,0));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s3,s4,
 	ft_strncmp(s3,s4,6),strncmp(s3,s4,6));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s5,s6,
 	ft_strncmp(s5,s6,6),strncmp(s5,s6,6));
 		printf("%s\n%s\nmyoutput:%d\nfunctionoutput:%d\n",s5,s6,
 	ft_strncmp(s7,s8,6),strncmp(s7,s8,6));
 }*/
