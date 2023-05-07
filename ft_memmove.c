/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:34:43 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 16:16:11 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest == src)
		return (dest);
	else if (dest > src)
	{
		while (i--)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main()
{
	char dest[44];
	char dest2[44];
	char src[] = "la papaya es una fruta tropical muy popular";

	ft_memmove(dest, src, 25);
	memmove(dest2, src, 25);
	printf("FT function: %s\n", (char *)ft_memmove(src +2, src, 25));
	printf("OG function: %s\n", (char *)memmove(src +2, src, 25));
}
*/
