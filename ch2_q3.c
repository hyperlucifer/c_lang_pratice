#include<stdio.h>

int main() {

	float u, a, t;
	
	printf("enter the velocity = ");
		scanf("%f", &u);

		printf("enter the accelartion = ");
		scanf("%f", &a);

		printf("enter the time = ");
		scanf("%f", &t);

		printf("the final velocity is %f \n", u + a * t);
		printf("the distance teavelled is %f", u + (a * t) * (a * t));

		return 0;
		

}
