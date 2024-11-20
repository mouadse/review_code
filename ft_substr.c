/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:53:48 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/19 18:09:47 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*result;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (new_len < len)
			len = new_len;
		result = malloc(sizeof(char) * (len + 1));
		if (!result)
			return (NULL);
		ft_strlcpy(result, s + start, len + 1);
	}
	return (result);
}
