#include<stdio.h>

int main() {
	float f;
	printf("enter the temperture in fahrenheit = ");
	scanf("%f", &f);

	printf("the temperture in celsius is %f \n", (f - 32) * 5 / 9);
	printf("the temperture in kelvin is %f", (f - 32) / 1.8 + 273.15);


	return 0;
}