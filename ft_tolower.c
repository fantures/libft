/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:29:20 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:40:00 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
int main()
{
	char ch1 = '1';
	char ch2 = 'a';
	char ch3 = 'z';
	char ch4 = 'A';
	char ch5 = 'Z';
	char ch6 = '!';
	printf("ft function: %c\n", ft_tolower(ch1));
	printf("ft function: %c\n", ft_tolower(ch2));
	printf("ft function: %c\n", ft_tolower(ch3));
	printf("ft function: %c\n", ft_tolower(ch4));
	printf("ft function: %c\n", ft_tolower(ch5));
	printf("ft function: %c\n", ft_tolower(ch6));
	printf("original function: %c\n", tolower(ch1));
	printf("original function: %c\n", tolower(ch2));
	printf("original function: %c\n", tolower(ch3));
	printf("original function: %c\n", tolower(ch4));
	printf("original function: %c\n", tolower(ch5));
	printf("original function: %c\n", tolower(ch6));
}
*/
