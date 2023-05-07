/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:30:00 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:59:55 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	lil_len;

	b = 0;
	lil_len = ft_strlen(little);
	if (lil_len == 0 || big == little)
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		l = 0;
		while (big[b + l] != '\0' && little[l] != '\0'
			&& big[b + l] == little[l] && b + l < len)
			l++;
		if (l == lil_len)
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}
