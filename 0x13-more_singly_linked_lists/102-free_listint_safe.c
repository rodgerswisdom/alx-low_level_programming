#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int change;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		change = *h - (*h)->next;
		if (change > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
