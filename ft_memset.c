/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:18:04 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/25 18:45:26 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
unsigned char is used in memset to handle memory byte by byte
uniformly, avoiding sign-related issues and ensuring consistent behavior
across different platforms.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_aux;
	size_t			count;

	if (!s)
		return (NULL);
	s_aux = s;
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