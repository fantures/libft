/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:24:07 by fantures          #+#    #+#             */
/*   Updated: 2023/04/24 19:30:36 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int main(void)
{
	char dst[] = "bananaman";
	char dst2[] = "bananaman";
	char src[] = "Source asd";
	int  size = strlen(src);

	printf("\nB4 cpy:\n%s\n%s\n", dst, dst2);
	printf("\nFT: %ld -> %s\n", ft_strlcpy(dst, src, size), dst);
	printf("OG: %d -> %s\n", strlcpy(dst2, src, size), dst2);
}
*/
