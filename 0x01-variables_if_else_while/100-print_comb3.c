#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	int b = '0';

	for (a = '0'; a <= '9'; a++)/*to print ones*/
	{
		for (b = '0'; b <= '9'; b++)/* prints tens*/
		{
			if (!((a == b) || (b > a)))/*eliminates repitition*/
			{
				putchar(a);
				putchar(b);
			}
		{
			putchar(',');
			putchar(' ');

		}

		}

	}
	putchar('\n');

	return (0);
}
