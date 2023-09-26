#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
  * Return: info inside the elements that were removed,
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;

	temps= (*head)->next;

	free(*head);

	*head = temps;

	return (number);
}
