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

	for (a = '0'; a <= '9'; a++)/*prints one digits*/
	{
		for (b = '0'; b <= '9'; b++)/*prints tens*/
		{
			if (!((a == b) || (b > a)))/*eliminate rep*/
			{
				putchar(b);
				putchar(a);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
