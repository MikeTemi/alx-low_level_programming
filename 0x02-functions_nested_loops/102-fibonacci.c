#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int j;
	long int k;
	long int f;

	j = 1;
	k = 2;
	printf("%ld, %ld, ", j, k);
	for (i = 3; i <= 50; i++)
	{
		f = j + k;
		printf("%ld", f);
		if (i != 50)
		{
			printf(", ");
		}
		j = k;
		k = f;
	}
	printf("\n");
	return (0);
}
