#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program print "programming is positive, zero, or negative
*
* Return: 0
*/
int main(void)
{
int n;
int k;
srand(time(0));
n = rand() - RAND_MAX / 2;
k = n % 10;

if (k > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, k);
}
else if (k == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, k);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
}
return (0);
}
