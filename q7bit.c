#include <stdio.h>

int main() {
    int a = 23;
    int b = 56;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf(" a= %d and b= %d", a, b);

    return 0;
}