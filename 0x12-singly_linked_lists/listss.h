/*
 * Singly Linked List Library
 * Author: Stephen musyoka
 * Description: This library provides a singly linked list data structure
 * and basic operations for working with it.
 */

#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function to print the elements of the linked list */
size_t print_list(const list_t *h);

/* Function to get the number of nodes in the linked list */
size_t list_len(const list_t *h);

/* Function to add a new node to the beginning of the list */
list_t *add_node(list_t **head, const char *str);

/* Function to add a new node to the end of the list */
list_t *add_node_end(list_t **head, const char *str);

/* Function to free the memory allocated for the linked list */
void free_list(list_t *head);

#endif
