/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:06:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/21 12:17:58 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
// 	t_list *node;
// 	char *content = "Hello, world!";

// 	node = ft_lstnew(content);
// 	if (node)
// 	{
// 		printf("Node content: %s\n", (char *)node->content);
// 		printf("Node next: %p\n", (void *)node->next);
// 	}
// 	else
// 	{
// 		printf("Failed to create node\n");
// 	}

// 	free(node);

// 	return 0;
// }
