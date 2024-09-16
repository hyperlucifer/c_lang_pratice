#include <stdio.h>
int main()
{

    int n, count = 0, rem = 0, sum = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + n;
        count = count + rem;
        count++;
        n /= 10;
    }
    printf("%d\n", sum);
    printf("%d", count);
}