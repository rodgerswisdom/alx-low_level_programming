#include "lists.h"

/**
  * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temps;

	if (head == NULL)
		return;

	while (*head)
	{
		temps = (*head)->next;

		free(*head);

		*head = temps;
	}

	*head = NULL;
}
