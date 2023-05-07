/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:44:06 by fantures          #+#    #+#             */
/*   Updated: 2023/04/25 16:51:05 by fantures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lcontent;

	lcontent = malloc(sizeof(t_list));
	if (!lcontent)
		return (0);
	lcontent->content = content;
	lcontent->next = NULL;
	return (lcontent);
}

/*
int	main(void)
{
    char *str = "la papaya";
    t_list *node = ft_lstnew(str);

    if (node != NULL)
    {
        printf("Node content: %s\n", (char *)node->content);
        printf("Node next: %p\n", node->next);
    }
    return (0);
}
*/
