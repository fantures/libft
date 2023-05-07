/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:01:40 by fantures          #+#    #+#             */
/*   Updated: 2023/04/24 18:44:40 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	char c;
	char c2;
	char c3;
	char c4;

	c = '0';
	c2 = 'd';
	c3 = '-';
	c4 = '7';
	printf("c -> %i	%i\n", isdigit(c), ft_isdigit(c));
	printf("c2 -> %i %i\n", isdigit(c2), ft_isdigit(c2));
	printf("c3 -> %i %i\n", isdigit(c3), ft_isdigit(c3));
	printf("c4 -> %i %i\n", isdigit(c4), ft_isdigit(c4));
	return (0);
}
*/
