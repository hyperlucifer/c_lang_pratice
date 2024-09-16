#include <stdio.h>

int main()
{

    int n, i, sum = 0;
    for (int n = 1; n <= 1000; n++)
    {
        sum = 0;
        for (int j = n; j != 0; j = j / 10)
        {

            i = j % 10;
            sum = sum + i * i * i;
        }
        if (n == sum)
        {
           printf("%d ", sum);
        }
    }
}