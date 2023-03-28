#include "main.h"


/*
 *print_char - print a char :)
 *@args: arguments list
 *return: 1 (success), -1 (failed)
 */

int print_char(va_list args)
{

	return _putchar(va_arg(args, int));
}

/* print_string: prints a string 
 *@args: arguments list
 *return: string length
 */

int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	if(str == NULL)
	{
		return (0);
	}
	i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	return (i);
}



