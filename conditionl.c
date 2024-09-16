#include <stdio.h>
int main()
{
	int a, b, c;
	a = 10;
	b = 15;
	c = 5;

	(a > b && a > c) ? printf("%d \n", a) : (b > a && b > c) ? printf("%d\n", b)
										: (c > a && c > b)	 ? printf("%d\n", c)
															 : printf("numbers are same\n");
	return 0;
}