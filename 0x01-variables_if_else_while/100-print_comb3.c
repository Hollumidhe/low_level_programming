#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)  
{
int p;
int k;
for (p = '0'; p < '9'; p++)
{
for (k = '0'; <= '9'; k++)
{    
if (p == '0' && k <'1')
continue
if (p == '1' && k < '2')
continue
if (p == '2' && k < '3')
continue
if (p == '3' && k < '4')
continue
if (p == '4' && k < '5')
continue
if (p == '5' && k < '6')
continue
if (p == '6' && k < '7')
continue
if (p == '7' && k < '8')
continue
if (p == '8' && k < '9')
continue
putchar(p);
putchar(k);
if (p == '8' && k == '9')
break;
purchar(',');
purchar(' ');
}
}
putchar('\n');
return (0);
}
