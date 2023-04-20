#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters.
 * @n: the number of paramters will be enterd to the function.
 * @...: the rest of the parameters which is the numbers to be added
 *
 * Return: 0 if n = 0 , otherwise it returns the sum of all numbers entered
 * the function.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
