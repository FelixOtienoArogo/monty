#include "monty.h"

/**
 *pall - function to print all the values on the stack from top
 *
 *@stack: the stack to be read
 *@line_number: the number of elements in the stack
 *
 *Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *h = *stack;
(void)line_number;

while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
