#include "lists.h"
/**
 * get_nodeint_at_index - this will return the nth node of a listint_t linked list
 * @head: contains the head
 * @index: contains index
 * Return:this returns the  nth node, if not NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
