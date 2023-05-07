/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:00:54 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:43:48 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int	main()
{
	char str[] = "This isz a string";
 	char f1 = 's';
 	char f2 = 'z';
 	char f3 = ' ';
 	char f4 = '\0';
 	char f5 = 'g';

	printf("\nString: %s\n", str);
 	printf("ft function: %s | original function: %s\n", 
 	ft_strrchr(str, f1), strrchr(str, f1));
 	printf("ft function: %s | original function: %s\n", 
 	ft_strrchr(str, f2), strrchr(str, f2));
 	printf("ft function: %s | original function: %s\n", 
 	ft_strrchr(str, f3), strrchr(str, f3));
 	printf("ft function: %s | original function: %s\n", 
 	ft_strrchr(str, f4), strrchr(str, f4));
 	printf("ft function: %s | original function: %s\n", 
	ft_strrchr(str, f5), strrchr(str, f5));

}
*/
