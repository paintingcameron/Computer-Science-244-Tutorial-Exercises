#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char c;
	
	int cCount, wCount, lCount;

	cCount = wCount = lCount = 0;

	

	while((c = getchar()) != EOF)
	{
		cCount++;

		if(c == '\n')
			lCount++;
		if(c != ' ' && ((c = getchar()) == ' ' || c == EOF || c == '\n'))
			wCount++;
	}

	printf("Characters:\t%i\nWords:\t%i\nLines:\t%i\n", cCount, wCount, lCount);

	return EXIT_SUCCESS;
}
