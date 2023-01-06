#include "main.h"

/**
 *  _pow_recursion - raises the power of x to y
 *  @x:int to be raised to power of y
 *  @y:int x to be raised to it power
 *
 *  Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
