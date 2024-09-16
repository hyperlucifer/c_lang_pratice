#include<stdio.h>

 int main()
{
	int a,b;

	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);

	printf("%d is the arithmetic mean of these numbers\n",(a+b)/2);
	printf("%d is the harmonic mean of these numbers\n",a*b/(a+b));

	return 0;
}