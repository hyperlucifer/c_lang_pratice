#include <stdio.h>
#define SIZE 7
int main()
{
    int sum = 0, i;
    int marks[SIZE];
    printf("enter the elements of array\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < SIZE - 1; i++)
    {

        if (i % i == 0)
        {
            printf("%d ", i);
        }
    }
        printf("\nthis is the prime number ");
}