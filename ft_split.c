/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:37:16 by arjaber-          #+#    #+#             */
/*   Updated: 2024/10/09 08:37:49 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_amt(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	next_word_len(char const *s, int pos, char c)
{
	int	len;

	len = 0;
	while (s[pos + len] && s[pos + len] != c)
		len++;
	return (len);
}

static char	*get_substring(char const *s, int start, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((sizeof(char) * (len + 1)));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char	**free_all(char **res, int j)
{
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		total_words;
	char	**res;
	int		len;

	i = 0;
	j = 0;
	total_words = words_amt(s, c);
	res = malloc(sizeof(char *) * (total_words + 1));
	if (!s || !res)
		return (NULL);
	while (j < total_words)
	{
		while (s[i] == c)
			i++;
		len = next_word_len(s, i, c);
		res[j] = get_substring(s, i, len);
		if (!res[j])
			return (free_all(res, j - 1));
		i += len;
		j++;
	}
	res[j] = (NULL);
	return (res);
}

/*int main(void)
{
    char **result = ft_split("hola como estas", 'o');
    for (int i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
    return 0;
}*/
