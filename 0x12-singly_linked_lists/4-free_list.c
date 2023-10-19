#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list and its strings
 * @head: Pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
    list_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current->str);  // Free the string
        free(current);       // Free the node
    }
}
