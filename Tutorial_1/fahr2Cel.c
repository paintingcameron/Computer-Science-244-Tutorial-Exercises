#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;

	for(fahr = atoi(argv[1]); fahr <= atoi(argv[2]); fahr += atoi(argv[3]))
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%6.2f\t%6.2f\n", fahr, celsius);
		fahr += atoi(argv[3]);
	}

	return EXIT_SUCCESS;
}
