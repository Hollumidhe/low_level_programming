#include "main.h"
/**
 *  print_alphabet - Print alphabet in lowercase using only `_putchar`
 * void return back void
 * Return: Always 0
 */
void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar (e);
	}
_putchar('\n');
}
