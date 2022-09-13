#include "main.h"

/**

 * main - This is the entry point

 * Return: will be always 0 (success)

 */

int main(void)

{

    chr *sh = "main";



    while(*sh)

    {

        _putchar(*sh);

        sh++

    }

    _putchar_("\n");



    return (0);

}