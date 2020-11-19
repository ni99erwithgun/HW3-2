#include <stdio.h> 
#include <stdlib.h> 

int gcd(int x, int y)
{
	while (y != 0)
	{
		int r = x %y;
		x = y;
		y = r;
	}
	return x;
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

int main(void)
{
	int x, y;

	printf("enter two interger\n");
	scanf_s("%d %d", &x, &y);

	printf("Lcm¡G%d\n", lcm(x, y));

	system("pause");
	return 0;
}