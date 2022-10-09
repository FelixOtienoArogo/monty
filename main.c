#include "monty.h"

/**
 *main - to run the monty program
 *
 *@argc: number of arguments
 *@argv: arguments
 *
 *Return: Always zero
 */
int main(int argc, char **argv)
{
FILE *file;
stack_t *stack = NULL;
int i = 0;
static char *string[1000] = {NULL};
size_t size = 1000;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

for (i = 0; getline(&(string[i]), &size, file) > 0; i++)
;

exec(string, stack);
fclose(file);
free_list(string);
return (0);
}
