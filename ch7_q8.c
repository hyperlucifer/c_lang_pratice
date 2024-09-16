#include<stdio.h>
#define SIZE 5


int main(){
    int sum=0,i,j;
   int marks[SIZE];

    printf("enter the elements of array\n");
    

    for ( i = 0; i < SIZE ; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("binary = ");
    for ( i = 0; i < SIZE ; i++)
    {
        while (marks[i] != 0)
        {

            if (marks[i] % 2 == 0) {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            marks[i] = marks[i] / 2;
        }
    }
    printf("octal = ");
    for (i = 0; i < SIZE; i++)
    {
        while (marks[i] != 0)
        {

            if (marks[i] % 8 == 0) {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            marks[i] = marks[i] / 8;
        }
    }
    printf("hexadecimal = ")
    for(i = 0; i < SIZE; i++)
    {
        while (marks[i] != 0)
        {

            if (marks[i] % 16 == 0) {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            marks[i] = marks[i] / 16;
        }
    }

}