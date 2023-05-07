/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:58:50 by fantures          #+#    #+#             */
/*   Updated: 2023/04/24 18:43:18 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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

	c = '+';
	c2 = '5';
	c3 = 'k';
	c4 = 'V';
	printf("c -> %i	%i\n", isalpha(c), ft_isalpha(c));
	printf("c2 -> %i %i\n", isalpha(c2), ft_isalpha(c2));
	printf("c3 -> %i %i\n", isalpha(c3), ft_isalpha(c3));
	printf("c4 -> %i %i\n", isalpha(c4), ft_isalpha(c4));
	return (0);
}
*/
