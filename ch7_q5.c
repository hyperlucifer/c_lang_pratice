#include<stdio.h>
#define SIZE 5
int main(){
    int sum=0,i,j,odd=0;
    
    int marks[SIZE];
    int percentage[SIZE];
    printf("enter the elements of first array\n");
    

    for ( i = 0; i < SIZE ; i++)
    {
        
        scanf("%d",&marks[i]);
    }
     printf("enter the elements of secound array\n");
    for ( i = 0; i < SIZE ; i++)
    {
        scanf("%d",&percentage[i]);
    }
    for ( j = 0; j < SIZE; j++)
    {
       for ( i = 0; i < SIZE; i++)
       {
        if (marks[j]==percentage[i])
        {
           printf("%d = %d\n", marks[j],percentage[i]);
        }
        
       }
       
        
    }
}
    