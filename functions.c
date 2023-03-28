#include "main.h"


/**
 * print_char - print a char :)
 * @args: arguments list
 * Return: 1 (success), -1 (failed)
 */

int print_char(va_list args)
{

	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string
 * @args: arguments list
 * Return: string length
 */

int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		return (0);
	}
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	return (i);
}

/**
  * print_a_integer - Prints a integer
  * @args: A list of variadic arguments
  * Return: The length of the string
  */
int print_a_integer(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_write('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursion_integer(m);
	return (count);
}

/**
  * recursion_integer - Prints a integer
  * @a: integer to print
  * Return: Nothing
  */
void recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		recursion_integer(t / 10);
	_putchar(t % 10 + '0');
}
