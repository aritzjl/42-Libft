/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:05 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/20 16:57:52 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter++;
	}
	if (s[counter] == (char)c)
		return ((char *)&s[counter]);
	return (NULL);
}
