#include "monty.h"
/**
 *pint - prints the value at the top of the stack, followed by a new line
 *
 *@stack: the stack
 *@line_number: the line
 *
 *Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
stack_t *head = *stack;
if (*stack == NULL)
{
fprintf(stderr, "%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

while(head)
printf("%d\n", head->n);
}
