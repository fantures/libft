/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:42:11 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 13:20:39 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main(void) 
{
	char *s = "test string";
	char *duplicate = ft_strdup(s);

	printf("Original string: %s\n", s);
	printf("Duplicate string: %s\n", duplicate);
	if (strcmp(s, duplicate) == 0) 
        	printf("Success! The duplicate string is correct.\n");
	else
		printf("Error! The duplicate string is incorrect.\n");
	return 0;
}
*/
