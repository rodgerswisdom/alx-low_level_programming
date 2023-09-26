#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temps = *head;
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temps && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temps->next;
			temps>next = new;
			return (new);
		}
		else
			temps= temps->next;
	}

	return (NULL);
}
