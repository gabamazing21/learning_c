#include <stdio.h>
int main()
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	struct date today, tommorow;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 
		31, 31, 30, 31, 30, 31
	};
	printf("Enter today's date (mm dd yyyy : ");
	scanf ("%i%i%i", &today.month, &today.day, &today.year);

	if (today.day != daysPerMonth[today.month -1]) //end of the month
	{
		tommorow.day = today.day + 1;
		tommorow.month = today.month;
		tommorow.year = today.year;
	}
	else if (today.month == 12) //end of the year
	{
		tommorow.day = 1;
		tommorow.month = 1;
		tommorow.year = today.year + 1;
	}
	else
	{
		tommorow.day = 1;
		tommorow.month = today.month + 1;
		tommorow.year = today.year;
	}
	printf("Tommorow's date is %i/%i/%.2i.\n", tommorow.month,
		       	tommorow.day, tommorow.year % 100);
	return (0);
}
