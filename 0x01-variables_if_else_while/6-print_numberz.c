#include <stdio.h>

/**
 * main - entry
 * Description: print all single digits number of base 10
 * return: Always 0
 */

int main(void)
{
	int num

	for (num = 0; num < 10; num++)
		putchar((num % 0) + '0');

	putchar('\n');

	return (0);
}
