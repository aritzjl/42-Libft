/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:26:25 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/30 10:23:49 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill( int size, char **strs, char *sep, char *result)
{
	int	s_count;
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (count < size)
	{
		s_count = 0;
		while (strs[count][s_count])
		{
			result[i] = strs[count][s_count];
			s_count++;
			i++;
		}
		s_count = 0;
		while (sep[s_count] && count < size - 1)
		{
			result[i] = sep[s_count];
			s_count++;
			i++;
		}
		count++;
	}
	result[i] = '\0';
}

char	*size_0(char *result)
{
	result = malloc(1 * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*initialize_result(void)
{
	char	*result;

	result = malloc(1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_size;
	int		count;

	result = initialize_result();
	total_size = 0;
	count = 0;
	if (size == 0)
		return (size_0(result));
	while (count < size)
	{
		total_size += ft_strlen(strs[count]);
		count++;
	}
	total_size += ft_strlen(sep) * size - 1;
	result = malloc((total_size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	count = 0;
	ft_fill(size, strs, sep, result);
	return (result);
}
/*int main() {
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    char *sep = "99999";
    int size = 6;

    char *result = ft_strjoin(size, strs, sep);

    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/
