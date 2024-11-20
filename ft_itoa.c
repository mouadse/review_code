#include "libft.h"

// static int	get_num_length(long num)
// {
// 	int	len;

// 	len = 0;
// 	if (num == 0)
// 		return (1);
// 	while (num != 0)
// 	{
// 		num /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// static void	fill_str(char *str, long num, int len, int sign)
// {
// 	str[len + sign] = '\0';
// 	while (len > 0)
// 	{
// 		str[len - 1 + sign] = (num % 10) + '0';
// 		num /= 10;
// 		len--;
// 	}
// 	if (sign)
// 		str[0] = '-';
// }

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	int		sign;
// 	int		len;
// 	long	number;

// 	number = n;
// 	sign = 0;
// 	if (number < 0)
// 	{
// 		sign = 1;
// 		number = -number;
// 	}
// 	len = get_num_length(number);
// 	str = (char *)malloc(sizeof(char) * (len + sign + 1));
// 	if (!str)
// 		return (NULL);
// 	fill_str(str, number, len, sign);
// 	return (str);
// }

#include "libft.h"

#include <stdlib.h>
#include <string.h>

static int	ft_length(long nbr)
{
	int	length;

	length = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

static int	ft_sign(long nbr)
{
	if (nbr < 0)
	{
		return (1);
	}
	return (0);
}

static void	nbr_to_str(char *s, long nbr, int length, int sign)
{
	while (length--)
	{
		s[length + sign] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char		*s;
	long		nbr;
	int		sign;

	nbr = (long)n;
	sign = ft_sign(nbr);
	length = ft_length(nbr);
	if (sign == 1)
		nbr *= -1;
	s = malloc((sizeof(char)) * (length + sign + 1));
	if (!s)
		return (NULL);
	if (sign == 1)
		s[0] = '-';
	nbr_to_str(s, nbr, length, sign);
	s[length + sign] = '\0';
	return (s);
}
