#include "lists.h"
/**
 * add_nodeint - this will add a new node
 * @head: this contains the head of list
 * @n: element
 * Return: this returns the adress of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
