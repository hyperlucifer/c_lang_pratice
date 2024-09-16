#include<stdio.h>
#include<string.h>
#define SIZE 5
int main(){

   char abc [SIZE];
   for (int  i = 0; i < SIZE; i++)
   {
    scanf("%c",&abc[i]); 
   }
   for (int  i = 0; i < SIZE; i++)
   {
    if (abc[i] ==" ")
    {
        abc[i] ="*";
    }
    
   }
   for (int  i = 0; i < SIZE; i++)
   {
    printf("%s",abc[i]);
   }
   
   
   
}