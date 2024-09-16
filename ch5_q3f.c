#include <stdio.h>
int main()
{
	int n,sum=0,i=0,j;

	printf("enter the number = \n");
	scanf("%d",&n);

	j =n;

	for(int j=n;j!=0;j=j/10){

		i=j%10;
		sum=sum+i*i*i;

		

	}

	if (n==sum)
	{
		printf("the number arm\n");
	}
	else{

		printf("not arm \n");
	}

	return 0;
}