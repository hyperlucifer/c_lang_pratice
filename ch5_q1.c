#include<stdio.h>
	
	 int main()
	{
		int sum=0,t,n;

		printf("enter the number\n");
		scanf("%d",&n);
		int temp=n;

		for(n=temp;n!=0;n=n/10){

			t=n%10;
			sum=sum+t;
			
		}
		printf("%d \n",sum);

		return 0;
	}