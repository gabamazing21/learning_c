#include <stdio.h>
/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	*p = 98;
	printf("a[0]: %d",a[0]);
	p2 = a + 3;
	*p2 = *p + 1337;
	return (0);
}
