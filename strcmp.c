#include "main.h"

/**
 *_strcmp - to compare the opcode to the string
 *
 *@opcode: the opcode
 *@string: the string
 *
 *Return: 0 if similar or 1
 */
int _strcmp(char *opcode, char *string)
{
while (*string != '\0')
{
if (*string == ' ')
string++;
else if (*opcode == *string)
{
opcode++;
string++;
if (*opcode == '\0' && (*string == ' ' || *string == '\n' || *string == '\0'))
return (1);
}
else
return (0);
}
return (0);
}
