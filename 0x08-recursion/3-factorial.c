#include "main.h"

/**
 * factorial - returns the factorial of a number
 *@n: number to get factorial
 *
 * Return: int
 */
int factorial(int n)
{

	int x;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = (n * factorial(n - 1));
	}
	return (x);
}
