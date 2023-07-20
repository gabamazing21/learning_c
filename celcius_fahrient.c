#include <stdio.h>
/* print fahrient-celsius table for Fahrenheit-Celsius 
   table for fahr = 0, 20, ..., 300e*/
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -17;/* lower limit of temperature table */
	upper = 148;/* upper limit */
	step = 11;/* step size */
	
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (9.0 * celsius)/5 + 32.0;
		printf("%6.2f\t%3.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
