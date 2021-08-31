#include "main.h"

/**
 * print_alphabet_x10
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++) 
	  {
	    for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	    _putchar('\n');
	  }
}
