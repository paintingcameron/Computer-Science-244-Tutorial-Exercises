#include <stdio.h>
#include <stdlib.h>
int y,m,d;
char days[7][30] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main(int argc, char *argv[])
{
	extern int y,m,d;
	int h;
	printf("Pleace enter a date in the form yyyy/mm/dd\n");

	scanf("%d/%d/%d", &y, &m, &d);

	if(m == 1)	/*If the month is Jan*/
	{
		m = 13;
		y--;
	}

	if(m == 2)	/*If the month is Feb*/
	{
		m = 14;
		y--;
	}

	h = (d + (26*(m+1)/10) + y + (y/4) + 6*(y/100) + (y/400)) % 7;

	if(0 <= h && h <= 6)
		printf("The entered day was/is a %s\n", days[h]);
	else
		printf("Something when wrong");

	return 0;
}


