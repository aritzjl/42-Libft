/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:28:49 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/25 18:47:41 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*aux;
	unsigned char		*dst;
	size_t				counter;

	aux = (unsigned char *)src;
	dst = (unsigned char *)dest;
	counter = n;
	if (aux < dst && dst < aux + n)
	{
		while (counter--)
			dst[counter] = aux[counter];
	}
	else
		ft_memcpy(dst, aux, counter);
	return (dest);
}
