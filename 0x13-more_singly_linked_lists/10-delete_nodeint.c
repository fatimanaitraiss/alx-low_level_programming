#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }

    prev = *head;
    current = prev->next;
    for (i = 1; current != NULL && i < index; i++)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    prev->next = current->next;
    free(current);

    return (1);
}

