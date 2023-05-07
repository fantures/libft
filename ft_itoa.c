/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:45:22 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 14:21:54 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	ilen;
	long	ln;
	char	*str;

	ln = n;
	ilen = int_len(ln);
	str = malloc(sizeof(char) * ilen + 1);
	if (!str)
		return (0);
	if (ln < 0)
	{
		ln *= -1;
		str[0] = '-';
	}
	str[ilen] = '\0';
	if (ln == 0)
		str[0] = '0';
	while (ln)
	{
		str[--ilen] = ln % 10 + 48;
		ln /= 10;
	}
	return (str);
}

/*
int main(void)
{
    int n1 = 2147483647;
    int n2 = -2147483648;
    int n3 = 0;
    
    char *str1 = ft_itoa(n1);
    char *str2 = ft_itoa(n2);
    char *str3 = ft_itoa(n3);
    
    printf("ft_itoa(%d) = %s\n", n1, str1);
    printf("ft_itoa(%d) = %s\n", n2, str2);
    printf("ft_itoa(%d) = %s\n", n3, str3);
    
    return 0;
}
*/
