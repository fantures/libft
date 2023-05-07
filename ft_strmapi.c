/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:04:18 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 14:27:20 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char f(unsigned int i, char c)
{
    if (i % 2 == 0)
        return c;
    else
        return c + 1;
}

int main(void)
{
    char str[] = "abcdefg";
    char *result = ft_strmapi(str, f);
    
    printf("Input string: %s\n", str);
    printf("Result string: %s\n", result);
    
    free(result);
    
    return 0;
}
*/
