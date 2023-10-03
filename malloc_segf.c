#include <stdlib.h>
#include <limits.h>
/**
 * main - introduction ot malloc and free
 * Return : 0
 */
int main()
{
	char *s;
	while(1)
	{
		s = malloc(INT_MAX);
		s[0] = 'H';
	}
	return (0);
}
