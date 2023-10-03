//a simple c program to show function pointers as parameter
#include <stdio.h>

//two simple functions
void fun1()
{
	printf("Fun 1\n");
}
void fun2()
{
	printf("Fun 2\n");
}
// A function that recieve a simple function
// as parameter and calls the function

void wrapper(void (*fun)())
{
	fun();
}
int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return (0);
}
