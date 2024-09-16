#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);

	temp=a;
	a=b;
	b=temp;
	printf(" \t %d  %d",a,b);
	return 0;
}