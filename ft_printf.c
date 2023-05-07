/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:04:41 by fantures          #+#    #+#             */
/*   Updated: 2023/05/05 19:52:57 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printer(va_list arg, const char var, unsigned int *len)
{
	if (var == 'c')
		ft_putlchar(va_arg(arg, int), len);
	else if (var == 's')
		ft_putlstr(va_arg(arg, char *), len);
	else if (var == 'p')
		ft_putlptr(va_arg(arg, unsigned long long), len);
	else if (var == 'd' || var == 'i')
		ft_putlnbr(va_arg(arg, int), len);
	else if (var == 'u')
		ft_putlnbr(va_arg(arg, unsigned int), len);
	else if (var == 'x' || var == 'X')
		ft_putlhex(va_arg(arg, unsigned int), var, len);
	else if (var == '%')
		ft_putlchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	int				i;
	unsigned int	fullen;
	va_list			arg;

	i = 0;
	fullen = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printer(arg, str[i + 1], &fullen);
			i++;
		}
		else
			ft_putlchar(str[i], &fullen);
		i++;
	}
	va_end(arg);
	return (fullen);
}
