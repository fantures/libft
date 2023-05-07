/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:36 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 14:14:15 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_substr(s, index, i - index);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*i
int main()
{
	char *s = "ola,bom,,dia,a#sdrubal!";
	char **split = ft_split(s, ',');
	char **split_ptr = split;

	if (!split)
	{
		printf("ft_split failed\n");
		return (0);
	}
	while (*split)
	{
		printf("%s\n", *split++);
	}
	split = split_ptr;
	while (*split)
		free(*split++);
	free(split_ptr);
	return (0);
}
*/
