/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:13:29 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 12:39:01 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int main()
{
	char ch1 = '1';
	char ch2 = 'a';
	char ch3 = 'z';
	char ch4 = 'J';
	char ch5 = 'G';
	char ch6 = '!';
	printf("ft function: %c\n", ft_toupper(ch1));
	printf("ft function: %c\n", ft_toupper(ch2));
	printf("ft function: %c\n", ft_toupper(ch3));
	printf("ft function: %c\n", ft_toupper(ch4));
	printf("ft function: %c\n", ft_toupper(ch5));
	printf("ft function: %c\n", ft_toupper(ch6));
	printf("original function: %c\n", toupper(ch1));
	printf("original function: %c\n", toupper(ch2));
	printf("original function: %c\n", toupper(ch3));
	printf("original function: %c\n", toupper(ch4));
	printf("original function: %c\n", toupper(ch5));
	printf("original function: %c\n", toupper(ch6));
}
*/
