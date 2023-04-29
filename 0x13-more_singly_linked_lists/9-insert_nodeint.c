#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the position where the new node should be added (starting from 0).
 * @n: The integer data of the new node to be added.
 *
 * Return: If the new node was successfully added, returns a pointer to the new node.
 *         Otherwise, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *prev_node = NULL, *curr_node = *head;

	if (head == NULL)
		return (NULL);

	for (i = 0; curr_node != NULL && i < idx; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (i < idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (prev_node == NULL)
		*head = new_node;
	else
		prev_node->next = new_node;

	new_node->next = curr_node;

	return (new_node);
}

