#include "lists.h"

/**
 * insert_node - adds a number to a singly-linked list that has been sorted..
 * @head: a reference to the connected list's head..
 * @number: The digit to enter.
 *
 * Return: When a function fails, the result is NULL. A pointer to the new node in the alternative case.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *n;

	n = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	n->x = number;

	if (node == NULL || node->x >= number)
	{
		n->nx = node;
		*head = n;
		return (n);
	}

	while (node && node->nx && node->nx->x < number)
		node = node->nx;

	n->nx = node->nx;
	node->nx = n;

	return (n);
}
