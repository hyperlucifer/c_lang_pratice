#include<stdio.h>

int main() {
	float l, b, h;
	
	printf("enter length ");
	scanf("%f", &l);
	printf("enter breath ");
	scanf("%f", &b);
	printf("enter height ");
	scanf("%f", &h);

	printf("the surface area of cuboid is %f \n", 2 * (l * b + l * h + b * h));
	printf("the volume of cuboid is %f", l * b * h);

	return 0;
}