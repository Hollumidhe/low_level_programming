#include "main.h"
/**
 * print_alphabet_10x - function to print abc 10 times
 *
 * Return:Always 0 (success)
 */

void print_alphabet_x10()
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
