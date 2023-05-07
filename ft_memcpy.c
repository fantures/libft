/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:16:57 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 16:15:07 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char src[20] = "la papaya";
	char dest [44] = "la banana es una fruta tropical muy popular";

	printf("\n%s\n\n%s\n\n", src, dest);
	ft_memcpy(dest, src, 25);
	//memcpy(dest, src, 25);
	printf("\nFT: %s\n", dest);
	//printf("OG: %s\n", dest);
}
*/
