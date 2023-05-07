/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:30 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 16:09:17 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main()
{
	char str[50] = "la papaya es una fruta tropical muy popular";
	char rts[50] = "popular muy tropical fruta una es papaya la";
	printf("\nBefore ft_memset(): %s\n", str);
	printf("Before memset(): %s\n", rts);
	ft_memset(str, '.', 8);
	memset(rts, ',', 8);
	printf("After ft_memset(): %s\n", str);
	printf("After memset(): %s", rts);
	return (0);
}
*/
