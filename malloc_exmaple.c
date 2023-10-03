#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *tab;

	tab = malloc(sizeof(int) * 2);
	tab[0] = 1;
	tab[1] = 53;
	tab[2] = 879;
	tab[3] = 900;
	tab[4] = 3979097;
	tab[5] = '\0';
	printf("%d\n", tab[3]);

}
