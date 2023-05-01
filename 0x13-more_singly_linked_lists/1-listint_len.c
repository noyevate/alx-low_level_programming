#include "lists.h"
/**
 * listint_len - this will  return the number of elements in a linked list.
 * @h: this is head of a list.
 *
 * Return: this returns the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
