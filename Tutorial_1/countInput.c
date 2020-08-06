#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char prev = ' ', c;
	int cCount, wCount, lCount;

	FILE *fp;
	cCount = wCount = lCount = 0;

	fp = fopen(argv[1], "r");

	while((c=fgetc(fp)) != EOF)
	{
		cCount++;

		if(c == '\n')
		{
			lCount++;
			/*cCount--;*/
		}
		
		else if( ((prev < 'A' || prev > 'Z') && (prev < 'a' || prev > 'z')) && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
			wCount++;

		prev = c;
	}

	printf("Characters:\t%i\nWords:\t%i\nLines:\t%i\n", cCount, wCount, lCount);

	fclose(fp);

	return EXIT_SUCCESS;
}
