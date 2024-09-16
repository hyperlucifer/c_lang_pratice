#include<stdio.h>

int main() {

	int sry;

	printf("enter your salary = ");
	scanf("%d", & sry);

	if (sry <= 150000) {
		printf("you have no tax");

	}
	else if (sry >= 150000 && sry<=300000) {

		printf("your tax is %d", sry * 20 / 100);
	}
	else if (sry >= 300000) {
		printf("your tax is %d", sry * 30 / 100);
	}
	return 0;
}