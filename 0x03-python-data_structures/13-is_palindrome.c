#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * is_palindrome - check a linked
 * @head: first node
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int values[2048], i = 0, cLoop, limit;

	if (head == NULL || *head == NULL)
		return (1);

	while (tmp != NULL)
	{
		values[i] = tmp->n;
		i++;
		tmp = tmp->next;
	}

	limit = (i % 2 == 0) ? i / 2 : (i + 1) / 2;

	for (cLoop = 0; cLoop < limit; cLoop++)
		if (values[cLoop] != values[i - 1 - cLoop])
			return (0);

	return (1);
}
