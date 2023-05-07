/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:54:32 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 13:58:00 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		m = malloc(1);
	else if (len > slen - start)
		m = malloc(slen - start + 1);
	else
		m = malloc(len + 1);
	if (!m)
		return (NULL);
	i = 0;
	while (i < len && start < slen)
	{
		m[i++] = s[start++];
	}
	m[i] = '\0';
	return (m);
}
