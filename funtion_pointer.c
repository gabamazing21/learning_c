#include <stdio.h>
void add(int a, int b)
{	
	printf("Addition is %d\n", a + b);
}
void substract(int a, int b)
{
	printf("Substraction is %d\n", a - b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}
int main(void)
{
	void (*fun_ptr_arr[])(int, int) = {add, substract, multiply};
	unsigned int ch, a = 15, b = 10;
	printf("Enter choice: 0 for add, 1 for substract and  2 for multiply");
	scanf("%d", &ch);
	if(ch > 2) 
		return 0;
	(*fun_ptr_arr[ch])(a, b);
	return (0);
}


