#include <stdio.h>
#include <stdarg.h>

int LargestNumber(int n, ...)
{
	va_list ptr;
	int i;
	va_start(ptr, n);
	int highest = 0;

	for (i = 0; i < n; i++)
	{
		int temp = va_arg(ptr, int);
		if (temp > highest)
		{
			highest = temp;
		}
	}
	va_end(ptr);
	return (highest);
}

int main()
{
    printf("\n\n Variadic functions: \n");

    // Variable number of arguments
    printf("\n %d ",
           LargestNumber(2, 1, 2));

    printf("\n %d ",
           LargestNumber(3, 3, 4, 5));

    printf("\n %d ",
           LargestNumber(4, 6, 7, 8, 9));

    printf("\n");

    return 0;
}
