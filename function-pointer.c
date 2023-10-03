#include <stdio.h>
/**
 * fun - a normal function with an int parameter
 *
 */
void fun(int a)
{
	printf("Value is of a is %d\n",a);
}
int main()
{
	//fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;

	/*
	 * the above line is equivalent of following
	 * two :
	 * (*fun_ptr)(int);
	 * fun_ptr = &fun
	 */

	//Invoking fun() using fun_ptr
	(*fun_ptr)(10);
	return (0);
}

