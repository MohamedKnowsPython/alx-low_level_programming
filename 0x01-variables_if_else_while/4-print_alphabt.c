#include <stdio.h>
/**
 * main - Entry
 * Description: 'print alphabets'
 * Return: success(0)
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
	if (n == 101 || n == 113)
{
		n++;
		continue;
}
	putchar(n);
	n++;
}
putchar("\n");
