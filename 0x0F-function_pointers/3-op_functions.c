#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 * @a: number one
 * @b:second number
 * Return: sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers
 * @a: num 1
 *
 * @b: num 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: num 1
 * @b: num 2
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: num 2
 * @b: num 1
 * Return: remeander is returned
 */
int op_mod(int a, int b)
{
	return (a % b);
}
