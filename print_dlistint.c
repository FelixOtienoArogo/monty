#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 *print_dlistint - prints the elements of a distinct_t list
 *
 *@h: the linked list
 *
 *Return: the number of nodes
 *
 */
size_t print_dlistint(const stack_t *h)
{
int n;
n = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}
