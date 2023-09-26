#include "lists.h"

/**
 * @head: pointer to the first node in our list
 * @n: insert in that another node
 **add_nodeint - adds a new node at the beginning of a linked list
 * Return: pointer to the new node, or NULL if it doesnt work
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
return (new);
}
