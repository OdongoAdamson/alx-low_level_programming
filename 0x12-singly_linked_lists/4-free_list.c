#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the list
 * @head: list being freed
 * Return: always 0 success
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
