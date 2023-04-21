#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet lettres
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
