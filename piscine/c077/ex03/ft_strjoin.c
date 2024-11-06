/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:07:39 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/17 17:45:44 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	totalsizechar(int size, char **strs, char *sep)
{
	int	k;
	int	j;
	int	s;
	int	sizeofsep;

	k = 0;
	j = 0;
	s = 0;
	sizeofsep = 0;
	while (sep[sizeofsep])
		sizeofsep++;
	while (k < size)
	{
		while (strs[k][j])
			j++;
		s = s + j;
		k++;
		j = 0;
	}
	s = s + (sizeofsep * (size - 1));
	return (s);
}

char	*ft_strcat(char **dest, char *src, char *result, int size)
{
	int	i;
	int	j;
	int	p;
	int	r;

	i = 0;
	j = 0;
	p = 0;
	r = 0;
	while (p < size)
	{
		while (dest[i][j])
				result[r++] = dest[i][j++];
		j = 0;
		while (src[j] && p < size -1)
				result[r++] = src[j++];
		j = 0;
		i++;
		p++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	else
	{
		result = malloc(sizeof(char) * (totalsizechar(size, strs, sep) + 1));
		if (!result)
			return (0);
		result[0] = '\0';
		result = ft_strcat(strs, sep, result, size);
	}
	return (result);
}

/*i nt main (int argc, char** argv)
{   
    printf("%s\n", ft_strjoin(argc - 2 , argv + 1, argv[argc - 1]));
}
int	main(int argc, char **argv)
{
	int k;

	k = 5;
	(void) argc;
	printf("%s\n",  ft_strjoin(k ,argv, "___"));
} */