#include "main.h"

/*
 * print_alphabet in lowercase
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
