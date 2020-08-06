#include <stdlib.h>
#include "stack.c"
#include <stdio.h>

double calculate(char c);

int main(int argc, char *argv[])
{
	char c;

	while((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			push((double)(c - '0'));
		else if (c == '+' || c == '-' || c == '*' || c == '/')
			push(calculate(c));
		else if (c == '\n')
			printf("The result of the equation is %f\n", pop());
		else if (c == ' ' || c == '\t')
			continue;
		else
			printf("There was an error\n");
	}

	return 0;
}

double calculate(char c)
{
	double x2 = pop(), x1 = pop();

	switch(c) 
	{
		case '+':
			return x1 + x2;
			break;
		case '-':
			return x1 - x2;
			break;
		case '*':
			return x1 * x2;
			break;
		case '/':
			if(x2 == 0)
				printf("Division by 0\n");
			return x1 / x2;
			break;
		default:
			printf("Error of calculation\n");
			return 0;
	}
}
