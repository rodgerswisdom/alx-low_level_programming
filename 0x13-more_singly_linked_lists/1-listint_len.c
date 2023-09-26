#include <stddef.h>  /* For size_t */
#include "lists.h"   /* Include your header file that defines listint_t */

/**
 * listint_len - Counts the number of elements in a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0; 

    while (h != NULL)
    {
        count++;       
        h = h->next;       }

    return (count);
}

