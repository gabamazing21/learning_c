#include <stdio.h>

void fun(int a)
{
	printf("Value is :%i\n",a);
}
int main()
{
	void (*fun_ptr)(int) = fun;

	fun_ptr(10);
	return (0);
}

