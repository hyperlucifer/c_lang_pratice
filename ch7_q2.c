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
    


    int min=marks[0],max=marks[0];

     for (i = 0; i <SIZE; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }
        
        if (marks[i] > max)
        {
            max = marks[i];
        }
        
    }
    printf("the minimum of %d\n",min);
    printf("the max %d\n",max);
} 