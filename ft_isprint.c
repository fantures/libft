/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:05:30 by fantures          #+#    #+#             */
/*   Updated: 2023/04/17 16:06:12 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	char c5;

	c = '\0';
	c2 = '\n';
	c3 = '\v';
	c4 = '%';
	printf("c -> %i  |  %i\n", isprint(c), ft_isprint(c));
	printf("c2 -> %i  |  %i\n", isprint(c2), ft_isprint(c2));
	printf("c3 -> %i  |  %i\n", isprint(c3), ft_isprint(c3));
	printf("c4 -> %i  |  %i\n", isprint(c4), ft_isprint(c4));
	return (0);
}
*/
