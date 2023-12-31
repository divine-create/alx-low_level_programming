#include "lists.h"

/**
 * print_listint - All the elements of a linked list prints
 * @a: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *a)
{
	size_t num = 0;

	while (a)
	{
		printf("%d\n", a->n);
		num++;
		a = a->next;
	}

	return (num);
}

