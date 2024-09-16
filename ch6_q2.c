#include<stdio.h>

int main(){

	int j=1,i=1,n=5;

	while(i<=5){
		j=1;

		while(j<=i){


			printf("%d",n);
			n--;

			j++;
			
		}
		printf("\n");

		i++;
		if(n==0){
			break;
		}
	}
	
}