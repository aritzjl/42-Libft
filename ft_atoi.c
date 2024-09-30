/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arjaber- <arjaber-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:31:52 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/25 18:38:39 by arjaber-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_empty(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_result(const char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	result;

	if (!str)
		return (0);
	i = skip_empty(str);
	negative = 1;
	if (str[i] == '-')
		negative = -1;
	if (negative == -1 || str[i] == '+')
		i++;
	result = ft_result(str, i) * negative;
	return (result);
}
