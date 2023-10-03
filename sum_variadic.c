#include <stdio.h>
#include <stdarg.h>
int AddNumbers(int n, ...)
{
	int sum = 0;
	//Declaring pointer to the 
	//argument list
	va_list ptr;
	int i;
	//initializing argument to the
	//list pointer
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		// accessing current variable
		// and pointing to the next one
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}

int main()
{
    printf("\n\n Variadic functions: \n");

    // Variable number of arguments
    printf("\n 1 + 2 = %d ",
           AddNumbers(2, 1, 2));

    printf("\n 3 + 4 + 5 = %d ",
           AddNumbers(3, 3, 4, 5));

    printf("\n 6 + 7 + 8 + 9 = %d ",
           AddNumbers(4, 6, 7, 8, 9));

    printf("\n");

    return 0;
}
