#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num < 9; num1 ++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num1 % 10) + '0');
			if (num1 != 8 && num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}