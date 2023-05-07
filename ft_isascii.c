/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:04:36 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 16:04:58 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int main(void)
{
	unsigned char c;
	unsigned char c2;
	unsigned char c3;

	c = '*';
	c2 = 'M';
	c3 = 200;
	printf("c -> %i	%i\n", isascii(c), ft_isascii(c));
	printf("c2 -> %i %i\n", isascii(c2), ft_isascii(c2));
	printf("c3 -> %i %i\n", isascii(c3), ft_isascii(c3));
	return (0);
}
*/
