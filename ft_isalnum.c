/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:39 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 16:54:31 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main(void)
{
	char c;
	char c2;
	char c3;
	char c4;

	c = '0';
	c2 = 'e';
	c3 = 'I';
	c4 = ']';
	printf("c -> %i	%i\n", isalnum(c), ft_isalnum(c));
	printf("c2 -> %i	%i\n", isalnum(c2), ft_isalnum(c2));
	printf("c3 -> %i	%i\n", isalnum(c3), ft_isalnum(c3));
	printf("c4 -> %i	%i\n", isalnum(c4), ft_isalnum(c4));
	return (0);
}
*/
