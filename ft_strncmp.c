/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:48:13 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/30 11:32:35 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && (s1[i] == '\0' && s2[i] != '\0'))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if (i < n && (s1[i] != '\0' && s2[i] == '\0'))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*int main(void)
{
	char	*str1 = "AC";
	char	*str2 = "AD";
	unsigned int	ui = 1;
	int	res = ft_strncmp(str1, str2, ui);

	if(res == 0)
	{
		write(1, "0", 1);
	}
	else if (res == -1)
	{
		write(1, "Y", 1);
	}
	return (0);
}*/
