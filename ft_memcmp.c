/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:59:35 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/25 18:47:32 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				counter;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	counter = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (counter < n)
	{
		if (p1[counter] != p2[counter])
			return (p1[counter] - p2[counter]);
		counter++;
	}
	return (0);
}
