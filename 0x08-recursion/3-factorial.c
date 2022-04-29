#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: number to get the factorial
 * Return: integer value of number factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
