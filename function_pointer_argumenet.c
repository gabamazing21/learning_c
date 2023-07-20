#include <stdio.h>
void fun1()
{
	printf("Fun 1\n");
}
void fun2()
{
	printf("Fun 2'\n");
}
void wrapper(void (*fun)())
{
	fun();
}
int main(void)
{
	wrapper(fun1);
	wrapper(fun2);
	return (0);
}
