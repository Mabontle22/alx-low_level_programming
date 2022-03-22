#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 *@c: uppercase character.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

*****************
#include "main.h"

/**
 * _isdigit - function that prints a sign of a number.
 *
 *@c: is a digit.
 *
 * Return: 1 if c is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

*****************
#include "main.h"

/**
* more_mubers - function that prints 10 times more number from 0 to 14.
* followed by a new line.
*
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i<= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putcher(n % 10) + '0');
		}
			_putchar('\n');
	}
}
******************
#include "main.h"

/**
*print__line - function that draws a straight line in the terminal.
*
*@n: n in the number times the character _ should be printed.
*
*Return: Always 0 (Success)
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i - 0;1 < n: 1++)
		{
			_putchar('_');
		}
	}
	_putcher('\n');
}	
**********************
#include "main.h"

/**
* print_diagonal - a fuction that draws a diagonal line on the terminal.
*
*@n: number.
*
*Return: diagona line on the terminal.
*/

void print_diagonal(int n)
{
	int filas;
	int columas;

	if (n > 0)
	{
		for (filas = 0; columas <= filas; columas++)
		{
			for (columas = 0; columas <= filas; columas++)
			{
			if(filas == columas)

	}
}
