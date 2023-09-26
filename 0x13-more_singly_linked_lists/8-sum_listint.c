
#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data 
  * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temps = head;

	while (temps)
	{
		sum += temps->n;
		temps = temps->next;
	}

	return (sum);
}
