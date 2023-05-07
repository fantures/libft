/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:45:18 by fantures          #+#    #+#             */
/*   Updated: 2023/05/05 19:51:14 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlchar(int c, unsigned int *len)
{
	write(1, &c, 1);
	*(len) += 1;
}

void	ft_putlstr(char *str, unsigned int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putlstr("(null)", len);
		return ;
	}
	while (str[i])
		ft_putlchar(str[i++], len);
}

void	ft_putlnbr(long n, unsigned int *len)
{
	if (n < 0)
	{
		ft_putlchar('-', len);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putlnbr((n / 10), len);
		ft_putlnbr((n % 10), len);
	}
	else
	{
		ft_putlchar((n + 48), len);
	}
}

void	ft_putlptr(unsigned long ptr, unsigned int *len)
{
	if (!ptr)
		ft_putlstr("(nil)", len);
	else
	{
		ft_putlstr("0x", len);
		ft_putlhex(ptr, 0, len);
	}
}

void	ft_putlhex(unsigned long nbr, const char var, unsigned int *len)
{
	if (nbr == 0)
	{
		ft_putlchar ('0', len);
		return ;
	}
	if (nbr >= 16)
	{
		ft_putlhex((nbr / 16), var, len);
		ft_putlhex((nbr % 16), var, len);
	}
	else
	{
		if (nbr <= 9)
			ft_putlchar((nbr + 48), len);
		else if (var == 0 || var == 'x')
			ft_putlchar(((nbr - 10) + 'a'), len);
		else if (var == 'X')
			ft_putlchar(((nbr - 10) + 'A'), len);
	}
}
