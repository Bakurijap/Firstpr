/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:02:14 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 13:44:41 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:51:29 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/23 18:21:39 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static	int	count_words(char const *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (in_word)
			{
				count++;
				in_word = 0;
			}
		}
		else
			in_word = 1;
	i++;
	}
	if (in_word)
		count++;
	return (count);
}

static	char	**freed(char **rsl, int k)
{
	while (k >= 0)
	{
		free(rsl[k]);
		k--;
	}
	free(rsl);
	return (NULL);
}

static char	*get_next_word(char const *s, int *i, char c)
{
	int	startind ;

	startind = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, startind, *i - startind));
}

char	**split(char const *s, char c)
{
	int		i;
	int		k;
	char	**result;

	k = 0;
	i = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[k] = get_next_word(s, &i, c);
			if (!result[k])
				return (freed(result, k));
			k++;
		}
	}
	result[k] = NULL;
	return (result);
}

// int main() {
// 	int i;
// 	char **result2;
// 	char str[] = "^^^1^^2a,^^^^3^^^^--h^^^^"; // Delimiter at the start
// 	char delimiter = '^';

// 	result2 = ft_split(str,delimiter);
// 	i = 0;
// 	while (result2[i])
// 	{
//     	printf("%s\n",result2[i]);
// 		free(result2[i]);
// 		i++;
// 	}
// 	free(result2);
//     return 0;
// }
