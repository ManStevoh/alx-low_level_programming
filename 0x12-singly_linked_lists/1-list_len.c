#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list (recursive version)
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
    if (h == NULL)
        return 0;

    return 1 + list_len(h->next);
}
