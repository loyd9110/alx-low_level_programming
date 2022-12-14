#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of
 * a dlistint_t linked list
 * @head: The head of a list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
