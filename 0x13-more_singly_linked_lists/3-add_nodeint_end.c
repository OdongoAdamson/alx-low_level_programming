#include "lists.h"

/**
 * add_nodeint_end - add node ata the end
 * @head: pointer to start of list
 * @n: data to be inserted
 *
 * Return: pointer to ned element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *tmp = *head;

	new_end = malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while (tmp->next)
	tmp = tmp->next;

	tmp->next = new_end;

	return (new_end);
}
