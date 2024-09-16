#include<stdio.h>
int main() {

	int a = 5;
	int b;
	

	//using left shift by 1

	b = a << 1;

	printf("the left shift of %d is %d \n", a, b);

	//using right shift by 1

	b = a >> 1;

	printf("the right shift of %d is %d \n", a, b);


	return 0;

}
