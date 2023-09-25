#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: A pointer to a pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp1, *tmp2;
	listint_t *forward_node;

	if (list == NULL)
		return;

	forward_node = (*list)->next;
	current = forward_node->prev;

	while (forward_node != NULL)
	{
		current = forward_node->prev;
		while (current != NULL && current->n > forward_node->n)
		{
			tmp1 = forward_node->next;
			tmp2 = current->prev;
			if (tmp1)
				tmp1->prev = current;
			if (tmp2)
				tmp2->next = forward_node;
			forward_node->prev = tmp2;
			current->next = tmp1;
			forward_node->next = current;
			current->prev = forward_node;
			if (*list == current)
				*list = forward_node;

			current = forward_node->prev;
			print_list(*list);
		}
		forward_node = forward_node->next;
	}
}
