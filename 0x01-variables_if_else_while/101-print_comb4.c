#include stdio.h>
/**
 * main - program that prints al possible different combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int c = p;
	int a;
	int d;
	
	while (c <= 99)
	{
		a = (c / 10 + '0');
		d = (c % 10 + '0');

		if (a < d)
		{
			putchar(a);
			putchar(d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');


			}

		}
		c++;
putchar('\n');
return (0);
}