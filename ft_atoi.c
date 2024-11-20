/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:06:42 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/16 13:56:40 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

// int ft_atoi(const char *str) {
//   int i;
//   int sign;
//   int result;
//
//   i = 0;
//   sign = 1;
//   result = 0;
//   while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') {
//     i++;
//   }
//   if (str[i] == '+' || str[i] == '-') {
//     if (str[i] == '-')
//       sign *= -1;
//     i++;
//   }
//   while (str[i] >= '0' && str[i] <= '9') {
//     result = result * 10 + str[i] - '0';
//     i++;
//   }
//   return (result * sign);
// }
