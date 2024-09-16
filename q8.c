#include<stdio.h>

int main() {

	int a = 5;
	int b = 6;
	int c;

	//using bitwise and opeartor

	c = a & b;
	printf("the and of a and b = %d \n", c);

	//using bitwise or opeartor

	c = a | b;
	printf("the and of a or b = %d \n", c);

	//using bitwise xor opeartor

	c = a ^ b;
	printf("the and of a xor b = %d \n", c);

	return 0;

}