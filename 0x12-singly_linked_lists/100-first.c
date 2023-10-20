#include "main.h"
/**
 * _isalpha - func to check if its alphabet
 * @c: char c
 * Return: 1if its a letter otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
