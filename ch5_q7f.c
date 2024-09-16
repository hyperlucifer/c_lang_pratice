#include <stdio.h>

int main (){

	int n,mod=0,div=0,c=0;
	printf("enter the number \n");
	scanf("%d",&n);
	
	for(int temp=n;temp!=0;temp=temp/10){

		mod=temp%10;
		c=(c*10)+ mod;
		

	}
	if(n==c){
		printf("the number is pallindrome \n");
	}
	else{

		printf("the number is not pallindrome \n");

	}
}
