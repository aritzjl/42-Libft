/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:34:40 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/20 16:57:29 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_substring(size_t pos, const char *big, const char *little, size_t len)
{
	size_t	substring_pos;

	substring_pos = 0;
	while (big[pos + substring_pos] && little[substring_pos]
		&& (pos + substring_pos < len))
	{
		if (big[pos + substring_pos] != little[substring_pos])
		{
			return (0);
		}
		substring_pos++;
	}
	return (little[substring_pos] == '\0');
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