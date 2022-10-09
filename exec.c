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
{"null", NULL}
};

for (line = 1, i = 0; string[i + 1]; i ++, line++)
{
if (_strcmp("push", string[i]))
{
push(&stack, line, string[i]);
}
else
{
j = 0;

while (!_strcmp(st[j].opcode, "null"))
{
if (_strcmp(st[j].opcode, string[i]))
{
st[0].f(&stack, line);
break;
}
j++;
}
if (_strcmp(st[j].opcode, "null") && !_strcmp(string[i], "\n"))
{
fprintf(stderr, "L%u: unknown intrustruction %s", line, string[i]);
exit(EXIT_FAILURE);
}
}
}
}
