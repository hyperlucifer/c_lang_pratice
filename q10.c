#include<stdio.h>

int main() {
	int a;
	printf("enter the number");
	scanf("%d", &a);

	if (a & 1) {
		printf("LSB of %d is set ", a);
	}
	else{
		printf("LSB of %d is unset ", a);
	}
	return 0;
}