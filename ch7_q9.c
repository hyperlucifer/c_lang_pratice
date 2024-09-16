#include<stdio.h>
#define SIZE 5
int main(){
  int sum=0,i,num,count=0;
  int marks[SIZE];
  printf("enter the elements of array\n");
  for ( i = 0; i < SIZE ; i++)
  {
    scanf("%d",&marks[i]);    
  }
  printf("Enter number to check the occurence : ");
  scanf("%d",&num);
  for (i=0;i<SIZE;i++){
    if(marks[i] == num) count++;
  }
  printf("\n%d occured for the %d times in an array\n",num,count);

}
