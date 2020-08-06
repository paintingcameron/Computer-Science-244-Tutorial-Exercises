#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int top = 0;
double values[MAX];

double pop(void);
void push(double d);
int isEmpty();
int isFull();

double pop(void)
{
	extern int top;
	extern double values[];

	double d;

	if(isEmpty() == 0)
	{
		d = values[top];
		top--;
		return d;
	} else {
		printf("Error at pop");
		return 0;
	}
}

void push(double d)
{
	extern int top;
	extern double values[];

	if(isFull() == 0)
	{
		top++;
		values[top] = d;
	} else
		printf("Error at push");
}

int isEmpty(void)
{
	if (top == -1)
		return 1;
	else 
		return 0;
}

int isFull(void)
{
	if(top == MAX)
		return 1;
	else
		return 0;
}
