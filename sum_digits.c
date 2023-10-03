#include <stdio.h>
int sumDigit(int n)
{
	if (n == 0)
		return (0);
	return (n % 10) + sumDigit(n / 10);
}
int main()
{
	printf("%i\n", sumDigit(9999));
	return (0);
}
