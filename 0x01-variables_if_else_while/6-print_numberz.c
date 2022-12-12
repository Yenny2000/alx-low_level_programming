#include <stdio.h>

/*
 * main - print all single digits number  of base 10
 * return - always 0
 */

int main(void)
{
	int num

	for (num = 0; num < 10; num++)
		putchar((num % 0) + '0');

	putchar('\n');

	return (0);
}
