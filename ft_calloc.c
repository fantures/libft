/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:31:53 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 16:52:08 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}

/*
int main(void)
{
	char *str;
	size_t n = 10;
	str = (char *)calloc(n, sizeof(char));
	printf("calloc: %s\n", str);
	free(str);
	str = (char *)ft_calloc(n, sizeof(char));
	printf("ft_calloc: %s\n", str);
	free(str);
	return 0;
}
*/
