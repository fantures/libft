/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:37:47 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:41:32 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char) c)
		return ((char *)s);
	return (NULL);
}

/*
int	main()
{
	printf("original function: %s\n", strchr("teste", 'e'));
	printf("ft function: %s", ft_strchr("teste", 'e'));
}
*/
