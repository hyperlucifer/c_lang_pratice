#include<stdio.h>

int main() {
	int a = 23;
	int b = 56;
	int c = 89;

	if (a > b && a > c) {
		printf("%d is greater", a);
	}
	else if (b > a && b > c) 
	{
		printf("%d is greater", b);
	}
	else if (c > a && c > b)
	{
		printf("%d is greater", c);
	}

	return 0;

}