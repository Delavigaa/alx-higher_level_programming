#include "lists.h"

/**
 * check_cycle - determines if there is a cycle in a linked list.
 * @list: checked linked list
 *
 * Return: 1 if the list containing a cycle, 0 else
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list;
	listint_t *f = list;

	if (!list)
		return (0);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}

	return (0);
}
