#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[2][30];

	printf("Please enter your name and surname\n");

	scanf("%s %s", name[0], name[1] );

	printf("Welcome to programming Mr/Mrs %s\n", name[1]);

	return 0;
}
