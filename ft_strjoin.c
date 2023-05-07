/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:57 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 14:02:02 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	news = malloc(i + j + 1);
	if (!news)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		news[j++] = s1[i++];
	i = 0;
	while (s2[i])
		news[j++] = s2[i++];
	news[j] = '\0';
	return (news);
}
