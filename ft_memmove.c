/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 04:10:14 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/19 12:48:59 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_cpy;
	char	*src_cpy;
	char	*dst_end;
	char	*src_end;

	i = 0;
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	dst_end = dst_cpy + len - 1;
	src_end = src_cpy + len - 1;
	if (!dst || !src)
	{
		return (NULL);
	}
	if (dst == src)
	{
		return (dst);
	}
	if (dst_cpy < src_cpy)
	{
		while (i < len)
		{
			dst_cpy[i] = src_cpy[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*dst_end = *src_end;
			dst_end--;
			src_end--;
			i++;
		}
	}
	return (dst);
}
