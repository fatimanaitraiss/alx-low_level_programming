#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers safely.
 *
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The number of nodes in the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *tmp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    *h = NULL; /* set the head to NULL */

    while (current != NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
        count++;

        /* check if we're about to free a node that was already freed */
        if (tmp <= current)
            break;
    }

    return (count);
}

