#include "lists.h"

/**
 * check_cycle - determines if there is a cycle in a linked list.
 * @list: checked linked list
 *
 * Return: 1 if the list contains a cycle, 0 else
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
