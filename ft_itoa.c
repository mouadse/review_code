#include "libft.h"

static int	get_num_length(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, long num, int len, int sign)
{
	str[len + sign] = '\0';
	while (len > 0)
	{
		str[len - 1 + sign] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;
	long	number;

	number = n;
	sign = 0;
	if (number < 0)
	{
		sign = 1;
		number = -number;
	}
	len = get_num_length(number);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);
	fill_str(str, number, len, sign);
	return (str);
}
