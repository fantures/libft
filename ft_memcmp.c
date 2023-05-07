/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:16:05 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 17:30:08 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *) s1)[i] == ((unsigned char *)s2)[i] && i < (n - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
int main()
{
	char str1[] = "aaaaaaaaa";
	char str2[] = "aaaaaaaaa" ;
	int  size = 10;
	int f1 = ft_memcmp(str1, str2, size);
	int f2 = memcmp(str1, str2, size);
	printf("%d\n", f1);
	printf("%d\n", f2);
}
*/
