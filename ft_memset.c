/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:18:04 by arjaber-          #+#    #+#             */
/*   Updated: 2024/10/06 19:43:58 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_aux;
	size_t			count;

	s_aux = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		s_aux[count] = (unsigned char)c;
		count++;
	}
	return (s);
}

/*
int main() {
    char buffer[10];

    memset(buffer, 200, 10);  // Establece todos los bytes a 200

    for (int i = 0; i < 10; i++) {
        printf("%u ", (unsigned char)buffer[i]);
    }
    return (0);
}
*/