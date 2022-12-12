#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet except q and e in lower case
 * Return: always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');
	return (0);
}
