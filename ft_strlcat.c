/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:36:06 by fantures          #+#    #+#             */
/*   Updated: 2023/04/24 19:34:21 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	total_len;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	total_len = d + s;
	if (size == 0 || size <= d)
		return (s + size);
	i = 0;
	while (src[i] && i < size - d - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (total_len);
}
