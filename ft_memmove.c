/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:28:49 by arjaber-          #+#    #+#             */
/*   Updated: 2024/10/09 08:50:30 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the bytes in src are first copied into a temporary array that does  not
overlap  src  or dest, and the bytes are then copied from the temporary
array to dest.
*/
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
