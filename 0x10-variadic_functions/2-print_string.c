#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - strings followed by new line
 * @separator: string of strings
 * @n: num of strings
 * @...: a variable of strings to be printed
 *
 * Description: if separator is null it is not printed. if null is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
