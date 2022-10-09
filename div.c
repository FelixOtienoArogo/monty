#include "monty.h"

/**
 * divi - divides the second element of the stack by the top element.
 * @stack: pointer to head of stack
 * @line_num: file's line number
 * Return: Void
 */
void divi(stack_t **stack, unsigned int line_num)
{
stack_t *h = *stack, *n;

if ((*stack) == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
exit(EXIT_FAILURE);
}

if (*stack && (*stack)->next)
{
n = h->next;
n->n = h->n / n->n;
free(h);
*stack = n;
}
}
