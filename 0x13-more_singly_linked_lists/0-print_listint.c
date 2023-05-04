#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t beastnodes = 0;
for (; h != NULL; h = h->next)
{
beastnodes++;
printf("%d\n", h->n);
}

return (beastnodes);
}
