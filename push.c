#include "monty.h"

/**
 *push - function to push an element to the stack
 *
 *@num: the integer to be pushed
 *@head: the stack
 *@line_number: the line number
 *
 *Return: nothing
 */

void push(stack_t **head, unsigned int line_number, char *num)
{
stack_t *new;
int dig;
strtok(num, " ");
dig = atoi(strtok(NULL, " "));

if (head == NULL)
{
fprintf(stderr, "L%d: usage: push integer", line_number);
exit(EXIT_FAILURE);
}
new = malloc(sizeof(stack_t));
if (new == NULL)
{
free(new);
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
new->prev = NULL;
new->n = dig;
new->next = *head;
if ((*head) != NULL)
(*head)->prev = new;
*head = new;
}
