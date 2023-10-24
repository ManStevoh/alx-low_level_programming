#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 *Author Stephen Musyoka
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_memory_allocation;
	int number;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp_memory_allocation = (*head)->next;
	free(*head);
	*head = temp_memory_allocation;

	return (number);
}
