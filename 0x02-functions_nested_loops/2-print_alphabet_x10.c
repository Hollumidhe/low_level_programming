#include "main.h"

/**
 * print_alphabet_10x - function to print abc 10 times
 *
 * Return: 0 
 */
void print_alphabet_x10(void)
{
	char d, f;



	for (f = 0; f <= 9; f++)

	{

		for (d = 'a'; d <= 'z'; d++)

		{

			_putchar(d);

		}

		_putchar('\n');

	}

}
