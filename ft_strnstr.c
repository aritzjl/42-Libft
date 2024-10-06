/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:34:40 by arjaber-          #+#    #+#             */
/*   Updated: 2024/10/06 20:02:38 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_substring(size_t p, const char *b, const char *lit, size_t n)
{
	size_t	substring_pos;

	substring_pos = 0;
	while (b[p + substring_pos] && lit[substring_pos]
		&& (p + substring_pos < n))
	{
		if (b[p + substring_pos] != lit[substring_pos])
		{
			return (0);
		}
		substring_pos++;
	}
	return (lit[substring_pos] == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter;

	if (*little == '\0')
		return ((char *)big);
	counter = 0;
	while (counter < len && big[counter] != '\0')
	{
		if (ft_is_substring(counter, big, little, len))
			return ((char *)&big[counter]);
		counter++;
	}
	return (NULL);
}

/*
int main()
{
	const char *big = "Hello, world!";
	const char *little = "world";
	char *result;

	result = ft_strnstr(big, little, 13);
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado.\n");

	return 0;
}
*/