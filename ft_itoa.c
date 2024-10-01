#include "libft.h"
#include <stdio.h>

int	digits_amount(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				digit_len;
	unsigned int	num;

	digit_len = digits_amount(n);
	res = malloc(sizeof(char) * (digit_len + 1));
	if (!res)
		return (NULL);
	res[digit_len--] = '\0';
	if (n == 0)
		return ("0");
	num = n;
	if (n < 0)
	{
		res[0] = '-';
		num = -n;
	}
	while (digit_len >= 0 && num > 0)
	{
		res[digit_len] = num % 10 + '0';
		num /= 10;
		digit_len--;
	}
	return (res);
}
