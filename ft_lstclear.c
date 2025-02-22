/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:02:10 by joaomigu          #+#    #+#             */
/*   Updated: 2024/04/18 19:03:47 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears a linked list and deallocates memory.
 *
 * This function iterates through the linked list
 pointed to by `lst`,calling the function pointed to
 by `del` on each content element to deallocate memory
 associated with it.
	Then it deallocates the memory of each node and
	sets the pointer `lst` to NULL.
 *
 * @param lst A pointer to a pointer to the first node
 of the linked list.
 * @param del A pointer to the function used to delete
 the content of each node.
 *            The function must conform to the following
 prototype:
 *            `void del(void *)`.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		temp = head;
		del(temp->content);
		head = head->next;
		free(temp);
	}
	*lst = NULL;
}
