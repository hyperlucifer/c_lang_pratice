#include<stdio.h>

 int main()
{
    int n,cur1=0,cur5=0,cur10=0,t=0;
	printf("enter the amount");
    scanf("%d",&n);
    
          cur10=n/10;
          n%=10; 
          cur5=n/5;
          n%=5; 
          cur1=n;
          
			
        printf("the number of 10 rs currency is %d\n",cur10);
        printf("the number of 5 rs currency is %d\n",cur5);
        printf("the number of 1 rs currency is %d\n",cur1);
	return 0;
}