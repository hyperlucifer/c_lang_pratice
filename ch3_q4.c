#include<stdio.h>

int main() {
	char v;
	printf("enter your character = ");
	scanf("%c", &v);

	if (v == 'A' || v == 'a' || v == 'e' || v == 'E' || v == 'i' || v == 'I' || v == 'o' || v == 'O' || v == 'u' || v == 'U') {
		printf("the character %c is vowel", v);
	}
	else {
		printf("the character %c is consonant", v);
	}
	return 0;
}