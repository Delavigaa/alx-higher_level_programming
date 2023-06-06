#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - single-linked list
 * @x: int
 * @next: indicate the next node
 *
 * Description: single-linked list node structure
 *
 */
typedef struct listint_s
{
	int x;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int x);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
