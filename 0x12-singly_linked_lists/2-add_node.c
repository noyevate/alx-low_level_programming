#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node to the begining of list_t
 * @head:this is the pointer to structure
 * @str: string
 * Return: the addres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->len = length;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
