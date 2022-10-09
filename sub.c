#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: pointer to head of stack
 * @line_num: file's line number
 * Return: Void
 */
void sub(stack_t **stack, unsigned int line_num)
{
stack_t *h = *stack, *n;

if ((*stack) == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
exit(EXIT_FAILURE);
}

if (*stack && (*stack)->next)
{
n = h->next;
n->n = n->n - h->n;
free(h);
*stack = n;
}
}
