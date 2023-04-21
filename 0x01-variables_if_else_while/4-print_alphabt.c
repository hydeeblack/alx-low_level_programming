#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet lettres exept q and e
 *
 * Return: Always 0(Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch <= 'e' || ch == 'q')
			c++;
		putchar(ch);
		c++;
	}
	putchar('\n');

	return (0);
}
