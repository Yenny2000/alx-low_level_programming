#include <stdio.h>

/*
 * main - print all numbers of base 16 in lower case
 * return - always 0
 */

int main(void)
{
	int num
	char la

	for (num = 0; num < 10; la++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)

	putchar('\n');
	return (0);
}
