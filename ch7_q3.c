#include<stdio.h>
#define SIZE 5
int main(){
    int sum=0,i,j,odd=0;
   int marks[SIZE];

    printf("enter the elements of array\n");
    

    for ( i = 0; i < SIZE ; i++)
    {
        scanf("%d",&marks[i]);
    }


     for (i = 0; i <SIZE; i++)
    {
        
       
            if(marks[i]%2!=0)
            {
                printf("the odd num is %d\n",marks[i]);
                sum =sum+marks[i];
                printf("%d",sum);
            }
            
        
    
    }
   
} 