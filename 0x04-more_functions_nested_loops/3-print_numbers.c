#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number 0 to 9,
 * followed by a new line
 */
void print_numbers(void);
{
	inti;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
