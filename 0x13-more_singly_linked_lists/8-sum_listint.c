#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resu
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_mem = head;

	while (temp_mem)
	{
		sum += temp_mem->n;
		temp_mem = temp_mem->next;
	}

	return (sum);
}
