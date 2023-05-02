#include "lists.h"

/**
 * get_nodeint_at_index - this will return the node at a certain index in a linked list
 * @head: this is the first node in the linked list
 * @index:gives the index of the node to return
 *
 * Return: this is returns a  pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

