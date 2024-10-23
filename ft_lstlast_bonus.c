/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:35:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/23 14:41:55 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_lstlast renvoie le dernier élément de 'lst'. Prend 'lst' (liste chaînée).
Renvoie un pointeur vers le dernier élément, ou NULL si la liste est vide.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// #include <stdlib.h>
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

// 		t_list *newbuble1;
// 		char *newbuble1_content = "Coucou";

// 		// Allouer de la mémoire pour newbuble1
// 		newbuble1 = ft_lstnew(newbuble1_content);
// 		if (newbuble1)
// 		{
// 			ft_lstadd_front(&node, newbuble1);
// 			printf("Node content after add: %s\n", (char *)node->content);
// 			printf("Node next after add: %p\n", (void *)node->next);
// 			printf(">>>>> Taille : %i\n", ft_lstsize(newbuble1));
// 			printf(">>>>> Last : %s\n", (char *)ft_lstlast(newbuble1)->content);

// 		}
// 		else
// 		{
// 			printf("Failed to create newbuble1\n");
// 		}
// 	}
// 	else
// 	{
// 		printf("Failed to create node\n");
// 	}

// 	// Libérer la mémoire allouée
// 	free(node);
// 	return 0;
// }
