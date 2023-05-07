/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:37:28 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:47:31 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i])
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
int main()
{
	char str1[] = "absdf";
	char str2[] = "acb";
	char str3[] = "afghij";
	char str4[] = "abcdeFGHIJ";
	printf("ft function: %d\n", ft_strncmp("test", "", 0));
	printf("ft function: %d\n", ft_strncmp(str1, str2, 7));
	printf("ft function: %d\n", ft_strncmp(str3, str4, 4));
	printf("ft function: %d\n\n", ft_strncmp(str3, str4, 8));
	printf("original function: %d\n", strncmp("test", "", 0));
	printf("original function: %d\n", strncmp(str1, str2, 7));
	printf("original function: %d\n", strncmp(str3, str4, 4));
	printf("original function: %d\n", strncmp(str3, str4, 8));
}
*/
