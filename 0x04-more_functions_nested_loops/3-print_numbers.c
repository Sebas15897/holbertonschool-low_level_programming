#include "holberton.h"

/**
 * print_most_numbers - print most of the digits
 * Return: Always 0
 */

void print_most_numbers(void)
{

  int a;

  for (a = '0'; a <= '9'; a++)
    {
      if (a == '2' || a == '4')
	{
	  ++a;
	}
      _putchar(a);
    }
  _putchar('\n');
}
