#include <stdio.h> 
#include <stdlib.h> 
#define L 47

void fill_fibonacci_numbers(int*, int);
void print(int*, int len);

int main(void)
{
	int fib[L] = { 0 };

	fill_fibonacci_numbers(fib, L);
	print(fib, L);

	return 0;
}

void fill_fibonacci_numbers(int* fib, int len)
{
	fib[0] = 0;
	fib[1] = 1;
	int i;
	for (i = 2; i < len; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

	}
}

void print(int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}