#include <stdio.h>
/**
 * main - possible combination of three digits
 *
 * Description: all three digits must be different
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	int b = '0';

	int c = '0';

	for (c = '0'; c <= '9'; c++)/* prints hundreds*/
	{
		for (b = '0'; b <= '9'; b++)/* prints tens*/
		{
			for (a = '0'; a <= '9'; a++)/*prints ones*/
			{
				if (!((a == b) || (b == c) || (b > a) || (c > b)))/*del repitition*/
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (!(a == '9' && c == '7' && b == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
