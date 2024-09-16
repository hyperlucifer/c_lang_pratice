#include<stdio.h>
	
	 int main()
	{
        int n=5,i,j;
        char num= 'A';
        for(i=1;i<=5;i++){
            for (j = n; j >=1 ; j--)
            {
                printf("%c ",num);
                num++;   
            }
            printf("\n");
            n--;
        }

		return 0;
	}