#include "main.h"

/**
 * factorial - returns the factorial of a number
 *@n: number to get factorial
 *
 * Return: nothing
 */
int factorial(int n)
{

	int n;

	n = 1;

	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
