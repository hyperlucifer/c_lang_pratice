#include<stdio.h>

int main() {
	int a = 12;
	int b = 10;
	
	//post incremant.
	
	printf("firsly used %d \n ", a++);
	printf("secoundly used %d \n ", a);

	//post decrimant.

	printf("firsly used %d \n", a--);
	printf("secoundly used %d \n", a);

	//pre incremant


	printf("firsly used %d \n", ++b);
	printf("secoundly used %d \n ", b);

	//post decrimant.

	printf("firsly used %d \n", --b);
	printf("secoundly used %d \n ", b);

	return 0;


}
