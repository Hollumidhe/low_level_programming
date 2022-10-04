#include "main.h"
#include <stdlib.h>
/**
* create_array - create an array of chars
* @size: size of the memory to print
* @c: character to print
*
* Return: a pointer of array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
int i = 0;
if (size == 0)
return (NULL);
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
while (size--)
{
ptr[i++] = c;
}
return (ptr);
}
