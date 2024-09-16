#include<stdio.h>
#define size1 2
#define size2 3

int main()
{
    int mat[size1][size2]={{12,23,54},
                           {24,56,23}};
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("%d  %d",mat[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
