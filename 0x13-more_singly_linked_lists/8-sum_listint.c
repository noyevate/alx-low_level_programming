#include "lists.h"
/**
 * sum_listint - will give the sum of the data inside the liked list
 * @head: contains the  head
 * Return: returns sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
