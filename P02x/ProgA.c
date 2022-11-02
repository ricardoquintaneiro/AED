#include <stdio.h>

void printArray(char *s, int *a, int size)
{

	printf("%s:", s);
	for (int i = 0; i < size; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
}

void cumsum(int *a, int *b)
{

	// Requires: b.length >= a.length
	int c = 0;
	for (int i = 0; i < 12; i++)
	{
		c += a[i];
		b[i] = c;
	}
}

int main()
{

	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printArray("a", a, (sizeof(a) / sizeof(a[0])));
	int b[12];
	cumsum(a, b);
	printArray("b", b, (sizeof(b) / sizeof(b[0])));
	int c[6] = {0};
	c[0] = 1;
	printArray("c", c, (sizeof(c) / sizeof(c[0])));
	while (c[1] < 10)
	{
		cumsum(c, c);
		printArray("c", c, (sizeof(c) / sizeof(c[0])));
	}

	return 0;
}
