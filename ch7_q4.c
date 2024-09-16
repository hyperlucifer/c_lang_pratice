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
      for(int i =0;i<=SIZE-1;i++){
            for (int j=0;j<SIZE-i-1;j++) {
                if(marks[j]>marks[j+1]){
                    int temp =marks[j];
                    marks[j]=marks[j+1];
                    marks[j+1]=temp;
                }
                
            }
      }
      printf("for assanding order");
       for ( i = 0; i < SIZE; i++)
       {
        printf("%d \n",marks[i]);
       }

    printf ("for desending order");

         for ( j = SIZE; j >= 0; j--)
       {
        printf("%d \n",marks[j]);
       }
     return 0;       
}
