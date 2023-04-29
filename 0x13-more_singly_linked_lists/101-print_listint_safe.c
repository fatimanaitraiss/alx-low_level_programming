#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head, *next = NULL;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        next = current->next;
        if (next >= current)
        {
            printf("-> [%p] %d\n", (void *)next, next->n);
            exit(98);
        }
        current = next;
    }

    return count;
}

