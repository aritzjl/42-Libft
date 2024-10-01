/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:46:34 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/30 11:32:19 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims the characters present in 'set' from the beginning and the end of the string 's1'.
 *
 * This function removes all occurrences of the characters found in 'set' from the
 * start and the end of the given string 's1'. The trimming process stops as soon as
 * a character not found in 'set' is encountered.
 * 
 * Memory is dynamically allocated to store the trimmed string, and it is the
 * responsibility of the caller to free this memory when it is no longer needed.
 * 
 * @param s1 The string to be trimmed. This is the input string that will be processed.
 * @param set A string containing the characters to be trimmed from 's1'. All occurrences
 * of any character in this string will be removed from the start and the end of 's1'.
 *
 * @return A new string that has been trimmed of the specified characters. If the allocation
 * fails, the function returns NULL. If 's1' or 'set' is NULL, the function also returns NULL.
 * 
 * @note The returned string should be freed by the caller to prevent memory leaks.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, start, (end - start + 1));
	return (res);
}
