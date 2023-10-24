#include "lists.h"

/**
 * lists_count - Returns the number of nodes in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t lists_count(const listint_t *head)
{
    size_t count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
