#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothing
 */
void print_school()
{
	char str[] = "Holberton";
	
	str[0] = 'S';
	printf("%s\n", str);
}
int main()
{
	print_school();
	return (0);
}
