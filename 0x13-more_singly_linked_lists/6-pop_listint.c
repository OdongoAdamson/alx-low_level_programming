#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: data that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
