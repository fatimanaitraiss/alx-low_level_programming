#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
    listint_t *temp;

    while (head != NULL)
    {
        tmp = head->next;
	free(head);
	head = tmp;
     
       
    }
}

