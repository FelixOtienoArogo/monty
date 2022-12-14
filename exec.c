#include "monty.h"
/**
 *exec - function to execute the opcodes
 *
 *@string: string of the given opcode
 *@stack: the stack to be operated on
 *
 *Return: nothing
 */
void exec(char *string[], stack_t *stack)
{
int line, i, j;
instruction_t st[] = {
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"sub", sub},
{"div", divi},
{"null", NULL}
};
for (line = 1, i = 0; string[i + 1]; i++, line++)
{
if (_strcmp("push", string[i]))
{
push(&stack, line, string[i]);
}
else if (_strcmp("nop", string[i]))
;
else
{
j = 0;
while (!_strcmp(st[j].opcode, "null"))
{
if (_strcmp(st[j].opcode, string[i]))
{
st[j].f(&stack, line);
break;
}
j++;
}
if (_strcmp(st[j].opcode, "null") && !_strcmp(string[i], "\n"))
{
strtok(string[i], " ");
fprintf(stderr, "L%u: unknown instruction %s\n", line, strtok(string[i], " "));
exit(EXIT_FAILURE);
}}}
free_stack(stack);
}
