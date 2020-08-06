#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char s[]);
void copy(char from[],char to[]);

int main(int argc, char *argv[])
{
	char line[MAXLINE], longest[MAXLINE];

	int maxLength;
	int length;

	maxLength = 0;

	while((length = getline(line)) > 0)
	{
		if(length > maxLength)
		{
			maxLength = length;
			copy(line, longest);
		}
	}

	printf("Longest length:%d\n\'%s\'\n", maxLength, longest);

	return EXIT_SUCCESS;
}

void copy(char from[], char to[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

int getline(char s[])
{
	int x = 0;

	char c;

	while((c = getchar()) != '\n' && x < MAXLINE-1 && c != EOF)
	{
		s[x] = c;
		x++;
	}

	s[x] = '\0';

	return x;
}
