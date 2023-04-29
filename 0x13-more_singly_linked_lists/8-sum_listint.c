#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty, returns 0.
 *         Otherwise, returns the sum of all the data (n) of the list.
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

