#include <stdio.h>
int main()
{
	char x = 1, y = 2;
	if (x&y)
		printf("Results of x&y is 1\n");
	if (x&&y)
		printf("Results of x&&y is 1\n");
	int var = 3;
	int a = 4, b = 3;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("var << 1 = %d\n", var << 1);
	printf("var >> 1 = %d\n", var >> 1);
	printf("After XOR, a = %d and b =  %d\n", a, b);
}
