#include <stdio.h>

int main() {
    char a;
    printf("enter the char ");
    scanf("%c", &a);

    printf("the next char is %c \n", a + 1);
    printf("the next char is %c", a - 1);

    return 0;
}