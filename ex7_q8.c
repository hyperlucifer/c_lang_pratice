#include<stdio.h>
#define size 5 
int main() {
	int marks[size];
	for (int i = 0;i < size;i++) {
		scanf("%d", &marks[i]);
	}
	for (int i = 0;i < size;i++) {
		int binary = marks[i] % 2;
		printf("the binary of this array is %d", binary);

	}

}
