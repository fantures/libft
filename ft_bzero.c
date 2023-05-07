/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:43:48 by fantures          #+#    #+#             */
/*   Updated: 2023/04/24 18:56:07 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}

/*
int main(void)
{
	char str[50] = "la papaya es una fruta tropical muy popular";
	char rts[50] = "popular muy tropical fruta una es papaya la";

	printf("\nBefore bzero(): %s\n", str);
	printf("Befor ft_bzero(): %s\n", rts);
	bzero(str + 10, 5);
	ft_bzero(rts + 10, 5);
	printf("After bzero(): %s\n", str);
	printf("After ft_bzero(): %s", rts);
	return (0);
}
*/	
