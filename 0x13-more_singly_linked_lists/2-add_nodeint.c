#include "lists.h"
/**
 * add_nodeint_end - this adds the node at the end
 * @head: contains the head of linked list
 * @n: element
 * Return: contains the address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	(void) temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}
