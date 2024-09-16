#include<stdio.h>

int main() {

	char a;
	
	printf("enter a char = ");
	scanf("%c", &a);


	if (a>=48&&a<=58){
		printf("%c is a digit \n",a);
	}
	else if (a>=97&&a<=122){
		printf("%c is a lowercase character \n",a);
	}
	else if (a>=65&&a<=90){
		printf("%c is a uppercase character \n",a);
	}


	return 0;
}