/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:34 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/20 16:57:25 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/*
int main(void)
{
    const char *str = "Hello, world!";
    int search_char = 'o';
    
    // Llama a strrchr para encontrar la última aparición de 'o'
    char *result = strrchr(str, search_char);

    if (result)
    {
        printf("Última aparición de '%c' está en la posición:
		 %ld\n", search_char, result - str);
        printf("Subcadena desde la última aparición: %s\n", result);
    }
    else
    {
        printf("Carácter '%c' no encontrado en la cadena.\n", search_char);
    }

    return 0;
}*/