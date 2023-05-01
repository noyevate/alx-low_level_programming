#include "lists.h"
/**
 * pop_listint - this function will delete the head of list
 * @head: contains  head
 * Return: returns head of node
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *h, *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	headNode = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (headNode);
}
