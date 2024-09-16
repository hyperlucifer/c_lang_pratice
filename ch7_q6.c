#include <stdio.h>
#define SIZE 5
int main()
{

    int size = 5;
    int marks[SIZE] = {1, 4, 2, 5, 3};
    int marks12[SIZE] = {1, 3, 2, 4, 1};
    int a[];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < SIZE; k++)
                {
                    a[k] = a[k + 1];
                }
                SIZE--;
            }
            else
            {
                j++;
            }
        }
    }
}
