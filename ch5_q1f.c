#include<stdio.h>
	
	 int main()
	{
		int sum=0,t,n;

		printf("enter the number\n");
		scanf("%d",&n);

		while(n!=0){

			t=n%10;
			sum=sum+t;
			n=n/10;
		}
		printf("%d \n",sum);

		return 0;
	}