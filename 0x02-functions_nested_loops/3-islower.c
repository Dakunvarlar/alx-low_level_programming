#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: will be the int used for the argument of function
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
