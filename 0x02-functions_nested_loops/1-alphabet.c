#include "main.h"

/**
 * print_alphabet - print in lowercase alphabet
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
	_putchar('\n');
}
