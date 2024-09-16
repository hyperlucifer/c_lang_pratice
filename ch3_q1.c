#include<stdio.h>

int main()
{
	int a;
	printf("enter the num = ");
	scanf ("%d",&a);

	if (a%2==0)
	{
		printf ("%d is even number",a);
	}
	else
	{
		printf("%d is odd number\n",a);
	}

	return 0;
}