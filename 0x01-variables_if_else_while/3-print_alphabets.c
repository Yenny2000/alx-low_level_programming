#include <stdio.h>
/**
 * main - entry point
 * Description: Print all the alphabet in upper and lower case
 * Return:  always 0
 */

int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
