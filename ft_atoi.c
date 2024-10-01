/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:31:52 by arjaber-          #+#    #+#             */
/*   Updated: 2024/09/30 10:50:30 by aritz            ###   ########.fr       */
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

	if (!ft_isdigit(str[i]))
		return (0);
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

	i = skip_empty(str);
	negative = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;	
	}
	if (!ft_isdigit(str[i]))
		return (0);
	result = ft_result(str, i) * negative;
	return (result);
}
