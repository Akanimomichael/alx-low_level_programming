#include "main.h"
/**
* _puts - prints a string, followed by a new line,
* @str: pointer to the string to be printed
* Return: void
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
i++;
}
_putchar('\n');
}
