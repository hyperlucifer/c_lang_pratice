#include<stdio.h>
int main() {
	int side;
	float r;
	float h;
	printf("enter the  radius = ");
	scanf("%f", &r);
	printf("enter the side = ");
	scanf("%d", &side);
	printf("enter the  height = ");
	scanf("%f", &h);

	printf("the surface area of cylinder is %f \n ", 3.14 * 3.14 * r * h);

	printf("the surface area of square is %d \n ", side*side);
	//printf("the volume of cylinder is %f ", 3.14 * r * r * h);


	return 0;
}
