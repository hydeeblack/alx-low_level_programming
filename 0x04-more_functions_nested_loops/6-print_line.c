#include "main.h"
/**
 * print_line - function that draws a straight line in the term
 * @n: input number
 * Return: straight line
 */
void print_line(int n)
{

int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
