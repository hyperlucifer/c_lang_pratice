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
    for ( i = SIZE; i >= 0; i--)
    {
        printf("%d\n",marks[i]);
    }
}
    