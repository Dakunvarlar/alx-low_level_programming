#include <stdio.h>

/**
 * main - program prints first 50 Fibonacci numbers,
 * starting with 1 and 2 followed by a new line.
 * Return: Always ) (Success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
		printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = k + j;
		j = k;
		k = mext;
	}
	return (0);
}
