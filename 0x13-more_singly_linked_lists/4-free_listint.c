#include "lists.h"

/**
 *author stephen musyoka
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_memory;

	while (head)
	{
		temp_memory = head->next;
		free(head);
		head = temp_memory;
	}
}
