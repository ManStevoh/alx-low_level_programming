#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenn = 0;
	int difff;
	listint_t *temp_memory;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difff = *h - (*h)->next;
		if (difff > 0)
		{
			temp_memory = (*h)->next;
			free(*h);
			*h = temp_memory;
			lenn++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenn++;
			break;
		}
	}

	*h = NULL;

	return (lenn);
}
