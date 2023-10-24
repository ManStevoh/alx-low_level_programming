#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_memory = *head;
	listint_t *current_memory = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_memory);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_memory || !(temp_memory->next))
			return (-1);
		temp_memory = temp_memory->next;
		i++;
	}


	current_memory = temp_memory->next;
	temp_memory->next = current_memory->next;
	free(current_memory);

	return (1);
}
