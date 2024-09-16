#include<stdio.h>

int main(){

	int n,sum=0;

	printf("enter the number \n");
	scanf("%d",&n);

	for (int i = 1; i < n; i++)
	{
		if (n%i==0){

			sum+=i;
		}
		
	}
	
	if(n==sum){
			printf("this is perfect number \n");
		}
		else{
			printf("this is not perfect number \n");
		}
	
}