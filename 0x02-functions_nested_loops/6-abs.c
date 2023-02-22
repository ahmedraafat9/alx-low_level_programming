#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @a: parameter to be printed
 * and it is int
 *
 * Return: always a and int refers to the a integer
 */

int _abs(int a)
{
	/* the int: is when a is integer */
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
