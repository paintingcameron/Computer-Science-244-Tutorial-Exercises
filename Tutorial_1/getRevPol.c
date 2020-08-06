#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void getEquation();

char equation[MAX];
int pos;

int main(int argc, char *argv[])
{
	getEquation();
	printf("%s", equation);
	return 0;
}

void getEquation()
{	
	/*	extern char equation[MAX];*/
	extern int pos;

	char op = 'a';
	char c;
	while((c = getchar()) != EOF || c != ')')
	{
		if (c == '(')
		{
			getEquation();
			if(op == 'a')
				continue;
			equation[pos] = op;
			pos += 2;
		} else if (c == '\n')
		{
			equation[pos] = '\n';
			pos++;
			break;
		}	
		else if ( c >= '0' && c <= '9')
		{
			equation[pos++] = c - '0';
			if(op == 'a')
				continue;
			equation[pos++] = op;
			pos++;
		}
		else if (c == '+' || c == '-' || c == '*' || c == '/')
			op = c;
	}
}
