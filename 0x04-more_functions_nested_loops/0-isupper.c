#include "holberton.h"

/**
 * _isupper - checks if is upper letter
 * @c: int for letter
 * Return: 1 if upper, 0 if not
 */


int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
