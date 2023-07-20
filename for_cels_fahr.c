#include <stdio.h>
/* print Fahrenheit-Celsius Table */
int main()
{
	float cels;
	for (cels = -17.8; cels <= 148.9; cels += 11.0)
	{
		printf("%6.1fd%3d\n", cels, ((9.0/5.0) * cels) + 32);
	}
	return(0);
}
