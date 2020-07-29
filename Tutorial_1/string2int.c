#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
		printf("RAW%d:%8s\tINT%d:%i\n", i, argv[i], i, atoi(argv[i]));

	return EXIT_SUCCESS;
}
