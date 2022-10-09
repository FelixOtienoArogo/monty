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
stack_t *new, *h = *head;
int dig, i = 0;
char *temp;
strtok(num, " ");
temp = strtok(NULL, " ");

while (temp[i] != '\n')
{
if ((temp[i] >= '0' && temp[i] <= '9') || temp[i] == ' ')
i++;
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
dig = atoi(temp);

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
if (*head)
h->prev = new;
*head = new;
}
