#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int x = 5, y = 10, temp;
	int *px = &x;
	int *py = &y;

	printf("Before swap: x: %d, y: %d \n", x, y);
	temp = *px;
	*px = *py;
	*py = temp;
	printf("After swap: x: %d, y: %d \n", x, y);
	return (0);
}
