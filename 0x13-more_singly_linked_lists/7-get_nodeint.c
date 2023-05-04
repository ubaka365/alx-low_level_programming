#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: the addres of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *c = NULL;
unsigned int x = 0;

while (head != NULL)
{
if (x <= index)
{
if (x == index)
{
c = head;
break;
}
head = head->next;
x++;
}
else
return (NULL);
}
return (c);
}
