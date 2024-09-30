/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:13:08 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/20 16:58:04 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!dest && !src)
		return (0);
	while (counter < n)
	{
		((unsigned char *)dest)[counter] = ((unsigned char *)src)[counter];
		counter++;
	}
	return (dest);
}
