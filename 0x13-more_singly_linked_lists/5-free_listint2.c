#include "lists.h"

/**
 *Author atephen musyoka
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_memory;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_memory = (*head)->next;
		free(*head);
		*head = temp_memory;
	}

	*head = NULL;
}
