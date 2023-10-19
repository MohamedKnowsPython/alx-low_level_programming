#include "lists.h"
#include <stdlib.h>
/**
 * list_len - elements in a LL
 * @h: pointer
 *
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
