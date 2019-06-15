#include <stdio.h>

int SumFunction(int a, int b);

int main(void)
{
	int Addition;
	printf("Hellow World\n");
	printf("Added changes\n");
	Addition = SumFunction(10,10);
	printf("Sum=%d",Addition);
	return 0;
}

int SumFunction(int a, int b)
{
	int Result;
	Result = a + b;
	return Result;
}